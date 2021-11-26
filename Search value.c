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
		printf("sorted values are %d \n ", x[u]);
	}

}


void storearray(int x[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("Enter value");
		scanf_s("%d", &x[i]);
	}
}

void printarray(int x[])
{
	printf("Values are");
	for (int u = 0; u < 3; u++)
	{
		printf("\n %d\n", x[u]);
	}

}


void search(int x[], int s)
{
	int r = -1; 
	for (int u = 0; u < 3; u++)
	{
		if (s== x[u])
		{
			r = u;
		}
	}
	printf("\n %d number search at %d",s,r+1);
}

void mul(int x[], int y[])
{
	printf("\nAfter multiplication ");
	for (int u = 0; u < 3; u++)
	{
		printf("\n %d\n", x[u] * y[u]);
	}
}

void main()
{

	int x[3];
	int y[3];
	//int a;
	storearray(x);
	printarray(x);
	storearray(y);
	printarray(y);
	mul(x,y);
	//bubblesort(x);
	/*printf("\nEnter value for search");
	scanf_s("%d",&a);
	search(x,a);*/
	_getch();
}
