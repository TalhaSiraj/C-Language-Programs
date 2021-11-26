#include<stdio.h>
#include<conio.h>
#include <stdlib.h>


void main()
{
	int num;
	FILE *fptr;

	fptr = fopen("C:\\Users\\Student\\Desktop\\data.txt", "w");

	if (fptr == NULL)
	{
		printf("Error!");
	}

	printf("Enter num: ");
	scanf("%d", &num);

	fprintf(fptr, "%d", num);
	printf("done");
	fclose(fptr);

	_getch();
}

