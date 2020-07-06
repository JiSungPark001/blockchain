#include<stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
	int num;

	printf("This program calculates factorials. \n");
	printf("Enter a value in the range 0-12 (q to quit) : \n");
	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("No negative numbers, please. \n");
		else if (num > 12)
			printf("Keep input under 13. \n");
		else
		{
			printf("loop : %d factorial = %ld \n", 
				num, fact(num));
			printf("recursion : %d factorial = %ld\n",
				num, rfact(num));
		}
		printf("Enter a value in the range 0 - 12 (q to quit) : \n");
	}
	printf("Bye. \n");
	return 0;
}
long fact(int n) // ex)5라는 값 입력
{
	long ans;

	for (ans = 1; n > 1; n--) // ans = 1로 초기화. 5를 입력받고 -1씩 곱해간다. 
	//{
		ans *= n; // ans = ans * n 즉, 5, 5*4*3*2
	//	printf("%d", n);
	//} 하면 내가 몇을 곱하고 있는지 나온다.
	return ans;
}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n * rfact(n - 1); /* ans = [5 * rfact(n-1)]; 
	[4 * rfact(n-1)] */
	else
		ans = 1;

	return ans;
}
