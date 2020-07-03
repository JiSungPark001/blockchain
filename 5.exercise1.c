#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{
	int min, hour, time;

	printf("분을 입력하시오(0보다 작으면 종료) : \n");
	scanf("%d", &time);

	while (time > 0)
	{
		hour = time / MIN_PER_HOUR;
		min = time % MIN_PER_HOUR;

		printf("%d분은 %d 시간, %d 분이다.\n", time, hour, min);
		printf("다음 값을 입력하시오 : \n");
		scanf("%d", &time);

	}
	printf("종료!\n");

	return 0;
	
}