#include <stdio.h>

// extern void A_Fun();
extern void B_Fun();

int main(void)
{
	printf("��> extern Ű����� �ܺ� �Լ� 2�� ��� ȣ��\n");

	// A_Fun();

	printf("��1>\n");
	printf("static void A_Fun() �Լ� ȣ�� ����\n");

	B_Fun();

	printf("void B_Fun() �Լ� ȣ�� ����\n");
	return 0;
}