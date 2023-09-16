#include <stdio.h>

int main(void)
{
	int munja;

	while (1)
	{
		if ((munja = getchar()) != EOF)
			putchar(munja);
		else
			break;
	}

	printf("EOF : %d\n", munja);

	return 0;
}