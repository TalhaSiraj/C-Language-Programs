#include<stdio.h>
#include<conio.h>

void main()
{

	for (int i = 0; i <= 8; i++)

	{
	for (int k = i; k <= 8; k++)

	{

	printf(" ");

	}

	for (int j = 1; j <= i; j++)

	{

	printf("%d", j);

	}

	for (int m = i + 1; m>0; m--)

	printf("%d", m);


	printf("\n");

	}

	_getch();
}
