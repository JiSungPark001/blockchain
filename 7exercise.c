/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;


	printf("숫자를 입력하시오 : \n");
	scanf("%d", &a);

	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
			printf("%d*%d = %d\n", a, b, a*b);
		printf("---------------\n");
	}
	printf("\n");

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a = 1, b;

	printf("구하고 싶은 값을 입력하시오 : ");
	scanf("%d", &b);
	printf("===================\n");

	while (a <= 9)
	{
		printf("%d * %d = %d\n", a, b, a*b);
		a++;
	}

	printf("===================\n");
	return 0;
}