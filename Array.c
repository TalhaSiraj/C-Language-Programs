#include<stdio.h>
#include<conio.h>

void storearray(int x[])
{

	for (int i = 0; i < 3; i++)
	{
		printf("Enter value\n");
		scanf_s("%d", &x[i]);
	}
	
}
void printarray(int x[])
{

	for (int i = 0; i < 3; i++)
	{
		printf("%d \t", x[i]);
	}
	printf("\n");
}

void squarearray(int x[])
{

	for (int i = 0; i < 3; i++)
	{
		printf("%d \t", x[i]*x[i]);
	}
	printf("\n");
}

void cubearray(int x[])
{

	for (int i = 0; i < 3; i++)
	{
		printf("%d \t", x[i] * x[i]*x[i]);
	}
	printf("\n");
}
void main()
{
	int x[3];
	int y[3];
	storearray(x);
	printf("\n\n");
	printarray(x);
	squarearray(x);
	cubearray(x);
	_getch();
}