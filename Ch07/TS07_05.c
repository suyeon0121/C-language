#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{

	int dan, cnt, recnt = 1, gob; // ������ ����, ī��Ʈ ����, ���� ���� ����  
	char yn;

	do {
		printf("< %d ȸ ���� >", recnt);
		printf("\n");

		for (cnt = 1; cnt <= 9; cnt++)         // 1~9���� ī��Ʈ
		{
			for (dan = 2; dan <= 9; dan++)     // ������ ����
			{
				gob = dan * cnt;          // ������ ���
				printf(" %d x %d = %02d ", dan, cnt, gob);
			}
			printf("\n");   // �ϳ��� �������� ��� ��µǸ� ���� ���
		}

	re:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N) : ");
		scanf_s("%c", &yn, sizeof(yn));
		getchar();

		switch (yn)
		{
		case 'Y': case 'y':
			recnt++;
			continue;
			break;

		case 'N': case 'n':
			printf("�� %dȸ ���� �� ���α׷��� �����մϴ�. \n", recnt);
			return 0;
			break;

		default:
			printf("�Է��� ���ĺ� \"%c\"��(��) ������� �ʽ��ϴ�. \n", yn);
			printf("���ĺ��� �ٽ� �Է��ϼ���. \n");
			goto re;
			break;
		}
	} while (1);
}