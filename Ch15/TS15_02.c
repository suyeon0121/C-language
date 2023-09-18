#include <stdio.h>

int main(void)
{
	char sts[50];
	int cnt;
	FILE* fp;
	errno_t err;

	printf("■ 키보드로 입력한 문자열을 파일에 저장\n");

	err = fopen_s(&fp, "input.txt", "w");

	if (err == 0)
	{
		printf("input.txt 파일 생성 완료! \n");
		printf("1.문자열 입력 : \n");

		gets_s(sts, sizeof(sts));

		printf("2.파일에 쓴 내용 출력 : %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], fp);
		fclose(fp);

		printf("input.txt 파일 닫기 성공! \n");
	}
	else
		printf("input.txt 파일 열기 실패! \n");

	return 0;
}
