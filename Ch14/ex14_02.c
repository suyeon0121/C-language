#pragma warning(disable : 4996)
#include <stdio.h>

struct student {
	int sno;
	char name[10];
	int kor;
	int eng;
	int mat;
	float avg;
};

int main(void)
{
	struct student s;
	int cnt, sum = 0;

	printf("�л��� �й�, ����, ���� �Է�\n");

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("\n[3�� �� %d��° �л�]\n", cnt);
		printf("�й� : ");
		scanf_s("%d", &s.sno);
		printf("���� : ");
		scanf_s("%s", s.name, sizeof(s.name));
		printf("���� ���� : ");
		scanf_s("%d", &s.kor);
		printf("���� ���� : ");
		scanf_s("%d", &s.eng);
		printf("���� ���� : ");
		scanf_s("%d", &s.mat);

		sum += s.kor + s.eng + s.mat;
		s.avg = sum / 3.0;

		printf("\n�й� \t\t���� \t���� \t���� \t���� \t���\n");
		printf("%d \t%s \t%d \t%d \t%d \t%.2f \n", s.sno, s.name, s.kor, s.eng, s.mat, s.avg);
		sum = 0;
	}

	return 0;

}
