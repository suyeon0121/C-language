#include <stdio.h>

int main(void)
{
	int num;
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "data.txt", "rt");

	if (NULL != fp)
	{
		printf("파일 열기 성공\n");

		while (EOF != fscanf_s(fp, "%d", &num))
		{
			printf("%d\n", num);
		}
		fclose(fp);
	}
	else
		printf("파일 열기 실패\n");

	return 0;
}