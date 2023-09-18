#include <stdio.h>

int main(void)
{
	int su = 10;
	int su_list[3] = { 1, 2, 3 };
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "list.dat", "wb");

	if (NULL != fb)
	{
		printf("바이너리 파일 열기 성공\n");

		fwrite(&su, sizeof(int), 1, fb);
		fwrite(su_list, sizeof(int), 3, fb);

		fclose(fb);
	}
	else
		printf("바이너리 파일 열기 실패\n");

	return 0;
}