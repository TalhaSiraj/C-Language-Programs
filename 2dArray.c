#include<stdio.h>
#include<conio.h>

void main()
{
	int x[3][2] ;
	//int y[3][2];

	//y[0][0] = 6;
	//y[0][1] = 5;

	for (int r = 0; r < 3; r++)
	{
		printf("Enter 2 value for row %d\n", r+1);
		for (int c = 0; c < 2; c++)
		{
			scanf_s("%d", &x[r][c]);
		}
	}



	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			printf("%d\t", x[r][c]);
		}
		printf("\n");
	}
	
	_getch();
}
