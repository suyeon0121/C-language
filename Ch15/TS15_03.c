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
		printf("���̳ʸ� ���� ���� : sample.dat\n");

		fwrite(&su, sizeof(int), 1, fb);
		fclose(fb);
	}
	else
		printf("���̳ʸ� ���� ���� ����!\n");
}

void data_p()
{
	int data;

	if (NULL != fb)
	{
		err = fopen_s(&fb, "sample.dat", "rb");
		printf("sample.dat ���� ���� ����!\n");

		fread(&data, sizeof(int), 1, fb);
		fclose(fb);

		printf("�о�� ������ : %d(0x%04x)\n", data, data);
	}
	else
		printf("���̳ʸ� ���� ���� ����!\n");
}

int main(void)
{
	printf("�� ���̳ʸ� ���� ���� �� ������ �о����\n");
	printf("[ open( ) �Լ� ȣ�� ]\n");
	open();
	printf("\n");

	printf("[ data_p( ) �Լ� ȣ�� ]\n");
	data_p();
	printf("\n");

	return 0;
}