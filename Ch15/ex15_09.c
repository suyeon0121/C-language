#include <stdio.h>

int main(void)
{
	int data;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "rb");

	if (NULL != fb)
	{
		printf("바이너리 파일 열기 성공\n");

		fread(&data, sizeof(int), 1, fb);
		fclose(fb);
		printf("읽어온 데이터 : %d(0x%04x)\n", data, data);
	}
	else
		printf("바이너리 파일 열기 실패\n");

	return 0;
}