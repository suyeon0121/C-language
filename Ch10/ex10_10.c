#include <stdio.h>
#define AL 5

int main(void)
{
	int s_list[AL] = { 5, 4, 1, 3, 2 };
	int a, b, temp, sort;

	printf("�ʱ�> �迭 ���: 5 4 1 3 2\n");
	printf("\n[for ������ ���� ���� ����]\n");

	for (a = 0; a < AL - 1; a++)
	{
		sort = a;

		for (b = a + 1; b < AL; b++)
			if (s_list[b] < s_list[sort])
				sort = b;

		/*-- ���� ������ ���� �� ġȯ --*/
		temp = s_list[a];
		s_list[a] = s_list[sort];
		s_list[sort] = temp;
	}
	printf("���> �迭 ���: ");

	for (a = 0; a < AL; a++)
		printf(" %d", s_list[a]);

	return 0;
}