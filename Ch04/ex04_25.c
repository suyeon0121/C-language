#include <stdio.h>

int main(void)
{
	char ch;
	int num1;
	float num2;

	ch = 'A' + 5;
	num1 = 3 + 7.8;
	num2 = 5 / 3.0;

	printf("char ch = \'A\' + 5\n");
	printf("µ¡¼À ¿¬»ê °á°ú(¹®ÀÚ) : %c\n", ch);
	printf("µ¡¼À ¿¬»ê °á°ú(Á¤¼öÇü) : %d\n", ch);
	printf("int num1 = 3 + 7.8\n");
	printf("µ¡¼À ¿¬»ê °á°ú : %d\n", num1);
	printf("float num2 = 5 / 3.0\n");
	printf("³ª´°¼À ¿¬»ê °á°ú : %f\n", num2);
	return 0;
}