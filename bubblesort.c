#include<stdio.h>
#include<conio.h>

void bubblesort(int x[])
{
	for (int p = 0; p < 3; p++)
	{
		for (int i = 0; i < 3 - 1; i++)
		{
			if (x[i] > x[i + 1])
			{
				int temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}
	}

	for (int u = 0; u < 3; u++)
	{
		printf("sorted values are %d \n " , x[u]);
	}

}

void main()
{

	int x[3];

	for (int i = 0; i < 3; i++)
	{
		printf("Enter value");
		scanf_s("%d", &x[i]);
	}

	bubblesort(x);

	_getch();
}
