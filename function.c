#include<stdio.h>
#include<conio.h>
//function declaration
void iqra();
int add(int,int);
int square(int);

//function defination
void iqra(void)
{
	printf("Hello iqra\n");
}

int add(int x,int y)
{
	int z = x + y;
	return z;
}


int square(int x){
	int z = x*x;
	return z;
}
void main()
{
	//function invoke
	//iqra();
	//int y=add(2,3);
	//printf("Answer is %d\n", y);
	//iqra();
	for (int u = 1; u <= 5; u++)
	{
		printf("\n%d\t%d" , u, square(u));
	}
	//printf("\nHi");
	_getch();
}