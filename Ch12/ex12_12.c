#include <stdio.h>
#include <string.h>

int sequential(char*, int, char);

int main(void)
{
	char str[80];
	char key = 'k';
	int check;

	printf("���ڿ� �Է� : ");
	gets(str);

	check = sequential(str, strlen(str), key);

	if (check < 1)
		printf("�Է��� ���ڿ����� ���ĺ� �ҹ��� \"k\"�� �����ϴ�.\n");
	else
	{
		printf("���ĺ� �ҹ��� \"k\"�� ã�ҽ��ϴ�.\n");
		printf("���ڿ��� %d��°�� �ֽ��ϴ�.\n", check + 1);
	}
	return 0;
}

int sequential(char* item, int count, char key)
{
	int i;

	printf("\n[���� Ž�� �Լ� ����]\n\n");

	for (i = 0; i < count; ++i)

		if (key == item[i])
			return i;

	return -1;
}