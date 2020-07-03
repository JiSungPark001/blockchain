#include<stdio.h>
int main(void)
{
	int a,b;
	int ch = 'A';
	
	for (a = 0; a < 6; a++)
	{
		for (b = 0; b < a + 1; b++)
			printf("%c", ch++);
		printf("\n");
	}
	

	return 0;
}