#pragma warning(disable : 4996)
#include <stdio.h>
#define US 1129.50

int main(void)
{
	const float FEES = 0.0175;
	int chsh;
	float dollar = 0, fees_chsh;

	printf("달러 환율 US = 1129.50\n");
	printf("달러 구매 수수료율 FEES = 0.0175\n");

	printf("환전할 금액(한화) : ");
	scanf_s("%d", &chsh);
	dollar = chsh / US;
	fees_chsh = chsh * FEES;

	printf("환전 후 미화 금액 : $ %.2f\n", dollar);
	printf("환전 수수료 : ￦ %.2f\n", fees_chsh);
	return 0;
}