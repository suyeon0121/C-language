#include <stdio.h>
#include <string.h>

void selection(char*, int);

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);

	selection(str, strlen(str));

	printf("���ڿ��� ���� ������ ��� : %s\n", str);
	return 0;
}

void selection(char* item, int count)
{
	int i, j, k;
	char t;

	printf("\n[���� ���� �Լ� ����]\n\n");

	for (i = 0; i < count - 1; ++i)
	{
		t = item[i];
		k = i;
		for (j = i + 1; j < count; ++j)
		{
			if (item[j] < t)
			{
				k = j;
				t = item[j];
			}
		}
		item[k] = item[i];
		item[i] = t;
	}
}