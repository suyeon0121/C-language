#include <stdio.h>
#include <string.h>

void bubble(char*, int);

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	bubble(str, strlen(str));
	printf("���ڿ��� ���� ������ ��� : %s\n", str);
	return 0;
}

void bubble(char* item, int count)
{
	int pass = 0;
	int change = 1;
	int j;
	char t;

	printf("\n[���� ���� �Լ� ����]\n\n");

	while (pass < count - 1 && change)
	{
		change = 0;
		for (j = 0; j < count - pass - 1; ++j)
		{
			if (item[j] > item[j + 1])
			{
				change = 1;
				t = item[j];
				item[j] = item[j + 1];
				item[j + 1] = t;
			}
		}
		pass++;
	}
}