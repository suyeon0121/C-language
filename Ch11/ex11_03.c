#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a = 300;
	int* pa = NULL;

	pa = &a;
	char yn;

	do
	{
		printf("\n �ּҰ� ���\n");
		printf("1.������ pa�� �ּҰ� : %u\n", pa);
		printf("2.�Ϲ� ���� a�� �ּҰ� : %u\n", &a);

		printf("\n�����Ͱ� ��� \n");
		printf("1.*pa�� �����Ͱ� : %u\n", *pa);
		printf("2.�Ϲ� ���� a�� �����Ͱ� : %u\n", a);

	re_play:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�?(Y/N) : ");
		scanf_s(" %c", &yn);

		switch (yn)
		{
		case 'Y': case 'y':
			continue;
			break;

		case 'N': case 'n':
			printf("���α׷��� �����մϴ�.\n");
			return 0;

		default:
			printf("\n%c��(��) ������ �ʴ� ���ĺ��Դϴ�!\n", yn);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
			goto re_play;
			break;
		}
	} while (1);
}