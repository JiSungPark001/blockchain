#include<stdio.h>
#define MONTHS 12

int main(void)
{
	int days[MONTHS]
		= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int index;
	int* p;
	int num;
	p = days;
	*p = 199;
	p++;
	*p = 299;

	num = *(p + 1); //31
	printf("num = %d\n", num);
	num = *p + 1; //
	printf("num = %d\n", num);


	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days. \n", index + 1, *(days + index));

	printf("\nMonth : %10p %10p %10p\n", days, days + 2, &days[2]);
	printf("Values : % d % d % d\n", *(days + 2), days[2], *days + 2);


	return 0;
}
