#include <stdio.h>

int main(void)
{
	int f_size;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "rb");

	if (NULL != fb)
	{
		printf("바이너리 파일 열기 성공\n");

		fseek(fb, 0, SEEK_END);
		f_size = ftell(fb);
		printf("파일 크기 : %d바이트\n", f_size);

		fclose(fb);
	}
	else
		printf("바이너리 파일 열기 실패\n");

	return 0;
}