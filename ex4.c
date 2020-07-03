#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	float meter;
	char name[32];

	printf("Hi What's your name & height? \n");
	scanf("%s %f", &name, &meter);

	printf("your name is %s and height is %5.2f meter. \n", name, meter);
		
	return 0;
}