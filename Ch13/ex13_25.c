#include <stdio.h>
#include <string.h>

int main(void)
{
	while (1)
	{
		int cnt, index = 0;
		int result;
		char word[30];

		char member[5][2][20] = {
			{"space", "123456"},
			{"web2me", "000000"},
			{"power", "555555"},
			{"quen33", "888888"},
			{"zzang", "111111"}
		};

		printf("ID �Է� : ");
		scanf_s("%s", word, 30);

		for (cnt = 0; cnt < 5; cnt++)
		{
			result = strcmp(member[index][0], word);

			if (result == 0)
			{
				printf("ID [%s]�� ", word);
				printf("PASSWORD�� %s�Դϴ�.\n", member[index][1]);
				return 0;
			}
			index++;
		}
		printf("�Է��� ID %s��(��) ã�� �� �����ϴ�.\n", word);
		printf("ID�� �ٽ� �Է��ϼ���.\n");
	}
}