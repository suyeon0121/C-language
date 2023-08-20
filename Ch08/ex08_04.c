#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>

int main(void)
{
	double result, weight1, weight2;

	printf("³» ¸ö¹«°Ô ÀÔ·Â(kg) : ");
	scanf_s("%lf", &weight1);
	printf("¼±»ý´Ô ¸ö¹«°Ô ÀÔ·Â(kg) : ");
	scanf_s("%lf", &weight2);

	result = weight1 - weight2;
	printf("[»¬¼À ¿¬»ê] %.2f - %.2f = %.2f \n", weight1, weight2, result);
	
	result = fabs(weight1 - weight2);
	printf("[Àý´ë°ª] %.2f - %.2f = %.2f \n", weight1, weight2, result);

	return 0;
}