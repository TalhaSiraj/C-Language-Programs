#include<stdio.h>
#include<conio.h>
void main()
{
	int choice, num1, num2, ans;
	do{
		printf("press 1 for Addition\n");
		printf("press 2 for Subtraction\n");
		printf("press 3 for Multiplication\n");
		printf("press 4 for Division\n");
		printf("press 5 for exit");

		printf("Enter your choice\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter first no\n");
			scanf_s("%d", &num1);
			printf("Enter second no\n");
			scanf_s("%d", &num2);
			ans = num1 + num2;
			printf("Answer is %d \n ", ans);
			break;
		case 2:
			printf("Enter first no\n");
			scanf_s("%d", &num1);
			printf("Enter second no\n");
			scanf_s("%d", &num2);
			ans = num1 - num2;
			printf("Answer is %d \n ", ans);
			break;
		case 3:
			printf("Enter first no\n");
			scanf_s("%d", &num1);
			printf("Enter second no\n");
			scanf_s("%d", &num2);
			ans = num1 * num2;
			printf("Answer is %d \n", ans);
			break;
		case 4:
			printf("Enter first no\n");
			scanf_s("%d", &num1);
			printf("Enter second no\n");
			scanf_s("%d", &num2);
			ans = num1 / num2;
			printf("Answer is %d \n", ans);
			break;
		default:
			printf("Wrong key\n");
			break;
		}
	} while (choice != 5);

	_getch();
}