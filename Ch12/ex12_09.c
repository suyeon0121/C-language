#include <stdio.h>

int main(void)
{
	int a = 100;
	char b = 'F';
	void* vp;

	printf("1.ĳ��Ʈ �����ڸ� ����ϴ� ���\n");

	vp = &a;
	printf("���� a�� ���� *(int*)vp�� ��� : %d\n", *(int*)vp);

	vp = &b;
	printf("���� b�� ���� *(char*)vp�� ��� : %c\n", *(char*)vp);

	printf("\n2.ĳ��Ʈ �����ڸ� ������� ���� ���\n");
	printf("���� a�� ���� *vp�� ��� : Illegal Indirection ����\n");

	printf("���� b�� ���� *vp�� ��� : Illegal Indirection ����\n");

	return 0;
}