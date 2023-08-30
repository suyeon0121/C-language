#pragma warning(disable : 4996)
#include <stdio.h>
#define SR 2		// 학생수
#define SC 3		// 과목수
#define DR 3		// 과목 수 배열 크기
#define DC 9		// 문자열 배열 요소 

int main(void)
{
	int score[SR][SC];
	char det[DR][DC] = {"국어점수", "영어점수", "수학점수"};
	int grade, cnt, jumsu, sum = 0;
	float avg;

	printf("■ 2명의 3개 과목 점수에 대한 총점과 평균을 각각 출력하는 프로그램\n");

	for (cnt = 0; cnt < SR; cnt++)
	{
		printf("문>> [ %d번째 ] 학생의 3개 과목 점수를 입력하시오.\n", cnt + 1);

		for (grade = 0; grade < SC; grade++)
		{
			printf("%s : ", det[grade]);
			scanf_s("%d", &score[cnt][grade]);
			sum += score[cnt][grade];
			avg = sum / 3.0;
		}
		printf("답>> 평균 점수 : %.2f\n\n", avg);
		sum = 0;
	}
	return 0;
}