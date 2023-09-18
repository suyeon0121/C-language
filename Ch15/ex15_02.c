#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "data.txt", "rt");

	if (NULL != fp)
	{
		printf("파일 열기 성공\n");

		fscanf_s(fp, "%d %d %d", &n1, &n2, &n3);
		printf("%d %d %d\n", n1, n2, n3);

		fclose(fp);
	}
	else
		printf("파일 열기 실패\n");

	return 0;
}