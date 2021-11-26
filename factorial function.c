#include<stdio.h>
#include<conio.h>

int factorial(int);

int factorial(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++){
		fact = fact*i;

	}
	return fact;
}


void main()
{
	for (int i = 1; i <= 10; i++)
	{
		printf("factorial of %d is %d\n", i, factorial(i));
	}
	_getch();
}