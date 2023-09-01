#include <stdio.h>

void menu(void);
int hap(int a, int b);
int cha(int a, int b);
int gob(int a, int b);
int na(int a, int b);

void menu(void)
{
	int size, cnt;
	char* ma[] = { "µ¡¼À", "»¬¼À", "°ö¼À", "³ª´°¼À", "Á¾·á" };
	size = sizeof(ma) / sizeof(ma[0]);
	for (cnt = 0; cnt < size; cnt++)
		printf("%d.%s \n", cnt, ma[cnt]);
}

int main(void)
{
	int choice, result, a, b;
	int(*fp[4])(int, int) = { hap, cha, gob, na };
	while (1)
	{
		menu();
	re:
		printf("¼±ÅÃ(0 ~ 4) : ");
		scanf_s("%d", &choice);
		if (choice < 0 || choice > 4)
		{
			printf("\nÀÔ·Â ¿À·ù\n");
			printf("´Ù½Ã ¼±ÅÃÇÏ¼¼¿ä.\n");
			goto re;
		}
		else if (choice == 4)
			break;
		else
		{
			printf("Á¤¼ö 2°³ ÀÔ·Â(¿¹> 10 20) : ");
			scanf_s("%d %d", &a, &b);
			result = fp[choice](a, b);
			printf("¿¬»ê °á°ú : %d\n", result);
		}
		printf("ÇÁ·Î±×·¥ ¼öÇà ¿Ï·á");
	}
	printf("\nÇÁ·Î±×·¥ Á¾·á\n");
	return 0;
}

int hap(int a, int b)
{
	int result;
	printf("\n[µ¡¼À hap() ÇÔ¼ö ¿µ¿ª]\n\n");
	result = a + b;
	return result;
}

int cha(int a, int b)
{
	int result;
	printf("\n[»¬¼À cha() ÇÔ¼ö ¿µ¿ª]\n\n");
	result = a - b;
	return result;
}

int gob(int a, int b)
{
	int result;
	printf("\n[°ö¼À gob() ÇÔ¼ö ¿µ¿ª]\n\n");
	result = a * b;
	return result;
}

int na(int a, int b)
{
	int result;
	printf("\n[³ª´°¼À na() ÇÔ¼ö ¿µ¿ª]\n\n");
	result = a / b;
	return result;
}