#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a;
int main()
{
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}