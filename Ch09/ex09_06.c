#include <stdio.h>

void Start();

int main(void)
{
	printf("Start() �Լ� 3ȸ ȣ�� ���\n");
	Start();
	Start();
	Start();

	return 0;
}

void Start()
{
	static int s_cnt = 0;
	int a_cnt = 0;

	printf("���� ���� = %d\t ���� ���� = %d\n", s_cnt, a_cnt);
	s_cnt++;
	a_cnt++;
}