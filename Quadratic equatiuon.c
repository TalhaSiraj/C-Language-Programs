#include <stdio.h>
#include <math.h>
#include<conio.h>
void main()
{
	float a, b, c, q1, q2;

	printf("Enter a");
	scanf_s("%f", &a);

	printf("Enter b");
	scanf_s("%f", &b);

	printf("Enter c");
	scanf_s("%f", &c);
	 


	q1 = (-b + sqrt((pow(b, 2)) - (4 * a*c))) / (2 * a);
	q2 = (-b - sqrt((pow(b, 2)) - (4 * a*c))) / (2 * a);

		printf("possitive answer %f", q1);
		printf("\n negative answer %f", q2);
		_getch();

}
