#pragma warning(disable : 4996)
#include <stdio.h>
#define N 20		// 이름 문자열
#define R 2			// 학생수
#define C 3			// 과목수

int main(void)
{
	int row, col, total = 0;
	float avg; 
	char name[N];
	int st[R][C];

	for (row = 0; row < R; row++)	// 학생 2명 반복 수행
	{
		printf("▶ 학생 %d의 성명과 3개 과목 점수 입력\n", row + 1);
		printf("%d.성명 : ", row + 1);

		scanf_s("%s", name, sizeof(name));

		for (col = 0; col < C; col++)	// 3개 과목 점수
		{
			printf("과목%d 점수 : ", col + 1);
			scanf_s("%d", &st[row][col]);
		}
		printf("\n");

		total = st[row][0] + st[row][1] + st[row][2];
		avg = total / 3.0;

		printf("%s의 성적 현황\n", name);
		printf("총점 : %d\n", total);
		printf("평균 : %.2f\n\n", avg);
	}
	printf("전체 %d명의 성적 처리 후 프로그램 종료\n", row);
	return 0;
}