#include <stdio.h>

int main(void)
{
	char sts[30];
	int cnt;
	FILE* fp;
	errno_t err;

	printf("■ \'test05.txt\' 파일을 열고 닫는 프로그램\n");

	err = fopen_s(&fp, "test05.txt", "wt");

	if (err == 0)
	{
		printf(" test05.txt 파일 생성 완료\n");
		printf(" 1.문자열 입력 : ");
		gets_s(sts, sizeof(sts));

		printf(" 2. 파일에 입력한 문자열은 %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], fp);
		fclose(fp);

		err = fopen_s(&fp, "test05.txt", "a+t");
		printf(" 3.문자열 입력 : ");
		gets_s(sts, sizeof(sts));

		printf(" 4.파일에 추가한 문자열은 %s\n", sts);
		printf(" 5.test05.txt 파일의 전체 내용을 확인하세요.\n");

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], fp);
		fclose(fp);
	}
	else
		printf(" save.txt 파일 생성 실패! \n");

	return 0;
}