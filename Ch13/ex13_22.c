#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Let's do-our_best! today";
	char div[] = " -_!";
	char* tok;				// �и��� ��ū ������ ������ ����
	char* context;			// �и��� ��ū �����ϱ� ���� �ּ� �Ҵ� ������ ����
	int cnt = 1;

	printf("�־��� ���ڿ� : %s\n", str);
	printf("������ : ����(\" \"), ������(-), �����(_), ����ǥ(!)\n\n");

	tok = strtok_s(str, div, &context);

	while (tok != NULL)
	{
		printf("%d��° ��ū : %s\n", cnt, tok);
		tok = strtok_s(NULL, div, &context);	// ���� ��ū�� ���ϱ� ���� NULL ���
		cnt++;
	}

	return 0;
}