#include <stdio.h>
#include <math.h>

int main(void)
{
	double result, target = 3.58;

	printf("double형 변수 target의 값 : 3.58\n");

	result = ceil(target);
	printf("올림 함수 ceil( ) 사용 결과 : %.2f\n", result);

	result = floor(target);
	printf("내림 함수 floor( ) 사용 결과 : %.2f\n", result);
	return 0;
}