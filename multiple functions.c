#include<stdio.h>
#include<conio.h>
double circleArea(double radius);
double rectangleArea(double width, double length);
double triangleArea(double base, double height);
void displayArea(char area);

double circleArea(double radius)
{
	double pi = 3.142;
	double ans1 = pi*radius*radius;
	return ans1;
}
double rectangleArea(double width, double length)
{
	double ans2 = width*length;
	return ans2;
}
double triangleArea(double base, double height)
{
	double ans3 = (base*height) / 2;
	return ans3;
}
void displayArea(char area)
{
	if (area == 'c')
	{
		int r;
		printf("Enter radius value");
		scanf_s("%d", &r);
		printf("Area of circle is %lf ", circleArea(r));
	}
	else if (area == 'r')
	{
		int w,l;
		printf("Enter width value");
		scanf_s("%d", &w);
		printf("Enter length value");
		scanf_s("%d", &l);
		printf("Area of rectangle is %lf ", rectangleArea(w, l));
	}
	else if (area == 't')
	{
		int b, h;
		printf("Enter base value");
		scanf_s("%d", &b);
		printf("Enter height value");
		scanf_s("%d", &h);
		printf("Area of triangle is %lf ", triangleArea(b, h));
	}
	else
	{
		printf("area not defined");
	}
}


void main()
{
	int choice;
	printf("enter c for circle\n");
	printf("enter r for rectangle\n");
	printf("enter t for triangle\n");
	choice = getchar();
	displayArea(choice);
	_getch();
}