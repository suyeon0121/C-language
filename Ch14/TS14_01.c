#pragma warning(disable : 4996)
#include <stdio.h>

struct pummok {
	char name[10];
	int su;
	int price;
	int tot;
};

int main(void)
{
	struct pummok m[3];
	int cnt;

	printf("■ 구조체 배열을 사용하여 품목 3개를 처리하는 프로그램\n");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf(" %d번째 품목의 품목, 수량, 단가 입력 \n", cnt + 1);
		printf(" 품목 : ");
		scanf("%s", m[cnt].name, 10);
		printf(" 수량 : ");
		scanf("%d", &m[cnt].su);
		printf(" 단가 : ");
		scanf("%d", &m[cnt].price);
	}

	for (cnt = 0; cnt < 3; cnt++)
		m[cnt].tot = m[cnt].su * m[cnt].price;

	printf(" [ 품목 3개의 수량, 단가, 금액 출력 \n");
	printf(" %s\t %s\t %s\t %s \n", "상품명", "수량", "가격", "금액(천 원)");

	for (cnt = 0; cnt < 3; cnt++)
		printf(" %s\t %3d\t %4d\t %8d\n", m[cnt].name, m[cnt].su, m[cnt].price, m[cnt].tot);

	return 0;

}