#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "SpaceZone";
	int cnt = 0;

	printf("�� ���ĺ� �빮�ڸ� �����Ͽ� ����ϴ� ���α׷�\n");
	printf("���α׷����� �־��� ���ڿ�\n");
	printf("char str[20] = \"%s\"\n", str);
	printf("���ĺ� �빮�ڸ� �����Ͽ� ��� : ");

	while (str[cnt])
	{
		if (isupper(str[cnt]))
			printf("%c", str[cnt]);

		cnt++;
	}
	printf("\n���α׷��� �����մϴ�.\n");
	return 0;
}