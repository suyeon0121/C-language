#include <stdio.h>

int main(void)
{
	int data;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "rb");

	if (NULL != fb)
	{
		printf("���̳ʸ� ���� ���� ����\n");

		fread(&data, sizeof(int), 1, fb);
		fclose(fb);
		printf("�о�� ������ : %d(0x%04x)\n", data, data);
	}
	else
		printf("���̳ʸ� ���� ���� ����\n");

	return 0;
}