#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char* fruit[] = { "Apple", "Tomato", "Pineapple" };
	int cnt;

	do
	{
		printf("1. Apple\n");
		printf("2. Tomato\n");
		printf("3. Pineapple\n");
		printf("4. Exit\n");
		printf("선택 : ");
		scanf_s("%d", &cnt);

		if (cnt == 1)
		{
			printf("선택한 과일은 \"Apple\"입니다.\n\n");
		}
		else if (cnt == 2)
		{
			printf("선택한 과일은 \"Tomato\"입니다.\n\n");
		}
		else if (cnt == 3)
		{
			printf("선택한 과일은 \"Pineapple\"입니다.\n\n");
		}
		else if (cnt == 4)
		{
			printf("프로그램을 종료합니다.\n\n");
			break;
		}
		else
		{
			printf("숫자는 1, 2, 3, 4만 허용됩니다.\n\n");
			continue;
		}

	} while (1);
	return 0;
}
