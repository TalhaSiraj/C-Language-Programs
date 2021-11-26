#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() 
{
int choice, a, b;
float x, y, Answer;
do {
printf("\n\nHere Are All The Functions,\nFor Choosing Just Put The Number Corresponding To It.\n\n");
printf("1.  Addition\n2.  Subtraction\n3.  Multiplication\n4.  Division\n");
printf("5.  Square Root\n6.  Power\n7.  Square\n8.  Cube\n");
printf("9.  Base 10\n10. Percentage %\n11. log\n12. Ln\n");
printf("13. Sin\n14. Cos\n15. Tan\n16. Cosec\n");
printf("17. Cot\n18. Sec\n19. Modulus\n20. Exponent\n\n");
printf("Choose The Function You Desire: ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
Answer = x + y;
printf("\nAnswer: %f\n", Answer);
break;
case 2:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
Answer = x - y;
printf("\nAnswer: %f", Answer);
break;
case 3:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
Answer = x * y;
printf("\nAnswer: %f", Answer);
break;
case 4:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
Answer = x / y;
printf("\nAnswer: %f", Answer);
break;
case 5:
printf("Enter X: ");
scanf("%f", &x);
Answer = sqrt(x);
printf("\nAnswer: %f", Answer);
break;
case 6:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
Answer = pow(x, y);
printf("\nAnswer: %f", Answer);
break;
case 7:
printf("Enter X: ");
scanf("%f", &x);
Answer = pow(x, 2);
printf("\nAnswer: %f", Answer);
break;
case 8:
printf("Enter X: ");
scanf("%f", &x);
Answer = pow(x, 3);
printf("\nAnswer: %f", Answer);
break;
case 9:
printf("Enter X: ");
scanf("%f", &x);
Answer = pow(10, x);
printf("\nAnswer: %f", Answer);
break;
case 10:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
Answer = ((x*100)/y);
printf("\nAnswer: %.2f", Answer);
break;
case 11:
printf("Enter X: ");
scanf("%f", &x);
Answer = log10(x);
printf("\nAnswer: %.2f", Answer);
break;
case 12:
printf("Enter X: ");
scanf("%f", &x);
Answer = log(x);
printf("\nAnswer: %.2f", Answer);
break;
case 13:
printf("Enter X: ");
scanf("%f", &x);
Answer = sin(x * 3.14159 / 180);
printf("\nAnswer: %.2f", Answer);
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
Answer = cos(x * 3.14159 / 180);
printf("\nAnswer: %.2f", Answer);
break;
case 15:
printf("Enter X: ");
scanf("%f", &x);
Answer = tan(x * 3.14159 / 180);
printf("\nAnswer: %.2f", Answer);
break;
case 16:
printf("Enter X: ");
scanf("%f", &x);
Answer = 1 / (sin(x * 3.14159 / 180));
printf("\nAnswer: %.2f", Answer);
break;
case 17:
printf("Enter X: ");
scanf("%f", &x);
Answer = 1 / tan(x * 3.14159 / 180);
printf("\nAnswer: %.2f", Answer);
break;
case 18:
printf("Enter X: ");
scanf("%f", &x);
Answer = 1 / cos(x * 3.14159 / 180);
printf("\nAnswer: %.2f", Answer);
break;
case 19:
printf("Enter X: ");
scanf("%d", &a);
printf("Enter Y: ");
scanf("%d", &b);
Answer = a % b;
printf("\nAnswer: %d", Answer);
break;
case 20:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
Answer = (x*pow(10,y));
printf("\nAnswer: %f", Answer);
break;
default:
printf("\nInvalid Choice!");
}
} while(choice);
getch();
return 0;
}


