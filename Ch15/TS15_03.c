#include <stdio.h>

void open();
void data_p();

errno_t err;
FILE* fb;

void open()
{
	int su = 0x0000035;

	err = fopen_s(&fb, "sample.dat", "wb");

	if (err == 0)
	{
		printf("바이너리 파일 생성 : sample.dat\n");

		fwrite(&su, sizeof(int), 1, fb);
		fclose(fb);
	}
	else
		printf("바이너리 파일 열기 실패!\n");
}

void data_p()
{
	int data;

	if (NULL != fb)
	{
		err = fopen_s(&fb, "sample.dat", "rb");
		printf("sample.dat 파일 열기 성공!\n");

		fread(&data, sizeof(int), 1, fb);
		fclose(fb);

		printf("읽어온 데이터 : %d(0x%04x)\n", data, data);
	}
	else
		printf("바이너리 파일 열기 실패!\n");
}

int main(void)
{
	printf("■ 바이너리 파일 생성 후 데이터 읽어오기\n");
	printf("[ open( ) 함수 호출 ]\n");
	open();
	printf("\n");

	printf("[ data_p( ) 함수 호출 ]\n");
	data_p();
	printf("\n");

	return 0;
}