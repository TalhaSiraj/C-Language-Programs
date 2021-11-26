#include<stdio.h>
#include<conio.h>
void main()
{
	for (int i = 1; i <10; i++)
	{
		for (int k = 10; k >i; k--)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for (int i = 10; i >=1; i--)
	{
		for (int k = i; k < 10; k++)
		{
			printf(" ");
		}
		for (int j = i; j >= 1; j--)
		{
			printf(" *");
		}
		printf("\n");
	}

	
	_getch();
}