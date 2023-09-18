#pragma warning(disable : 4996)
#include <stdio.h>

typedef struct pummok {
	int sno;
	char name[10];
	int age;
} ST;

int main(void)
{
	ST m[3];
	int cnt;

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%d번째 학생의 학번, 성명, 나이 입력\n", cnt + 1);
		printf("학번 : ");
		scanf("%d", &m[cnt].sno);
		printf("성명 : ");
		scanf("%s", m[cnt].name, 10);
		printf("나이 : ");
		scanf("%d", &m[cnt].age);
		printf("\n");
	}

	printf("[입력한 학생 3명의 정보 출력]\n");
	printf("%s\t\t %s\t\t %s\t \n", "학번", "성명", "나이");

	for (cnt = 0; cnt < 3; cnt++)
		printf("%d\t %s\t\t %d\t \n", m[cnt].sno, m[cnt].name, m[cnt].age);

	return 0;
}