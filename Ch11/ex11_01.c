#include <stdio.h>

int main(void)
{
    int i_num = 3;
    char ch = 'A';
    float f_num = 21.5;

    printf("�ڷ����� �ּҸ� 10������ ���\n");
    printf("1.int�� ������ �ּ� : %u\n", &i_num);
    printf("2.char�� ������ �ּ� : %u\n", &ch);
    printf("3.float�� ������ �ּ� : %u\n", &f_num);

    printf("\n�ڷ����� �ּҸ� 16������ ���\n");
    printf("1.int�� ������ �ּ� : %x\n", &i_num);
    printf("2.char�� ������ �ּ� : %x\n", &ch);
    printf("3.float�� ������ �ּ� : %x\n", &f_num);

    return 0;
}