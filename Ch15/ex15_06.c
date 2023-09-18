#include <stdio.h>

int main(void)
{
	char sts[50];
	int cnt;
	FILE* foc = NULL;
	errno_t err;

	err = fopen_s(&foc, "save.txt", "w");

	if (err == 0)
	{
		printf("save.txt 파일 생성 완료\n");
		printf("1.문자열 입력 : ");
		gets_s(sts, sizeof(sts));

		printf("2.파일에 쓴 내용 : %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputs(sts[cnt], foc);

		fclose(foc);
		printf("save.txt 파일 닫기 성공\n");
	}
	else
		printf("save.txt 파일 생성 실패\n");

	return 0;
}