#include <stdio.h>
#include <string.h>

int binary(char*, int, char);

int main(void)
{
	char str[80];
	char key = 'k';
	int check;

	printf("���ڿ� �Է� : ");
	gets(str);

	check = binary(str, strlen(str), key);

	if (check < 1)
	{
		printf("�Է��� ���ڿ����� ���� k�� �����ϴ�.\n");
	}
	else
	{
		printf("���� k�� ã�ҽ��ϴ�.\n");
		printf("���ڿ��� %d��°�� �ֽ��ϴ�.\n", check + 1);
	}
	return 0;
}

int binary(char* item, int count, char key)
{
	int low = 0, high, mid;
	high = count - 1;

	printf("\n[���� Ž�� �Լ� ����]\n\n");

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (key < item[mid])
			high = mid - 1;
		else
			if (key > item[mid])
				low = mid + 1;
			else
				return mid;
	}
	return -1;
}