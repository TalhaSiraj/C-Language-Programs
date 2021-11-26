#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int choice,num1,num2,Tnum,digit,value,i;
	printf("1:Power\n");
	printf("2:Identify greater numeber\n");
	printf("3:Table\n");

	scanf("%d",& choice);
	 switch(choice)
	 {
	 	case 1:
	 		printf("Enter number :");
	 		scanf("%d",&num1);
	 		
	 		printf("Enter number :");
	 		scanf("%d",&num2);
	 		
	 		for(i = num1;i<=num2;i++)
			 {
	 			value =pow(i,2);
	 			
	 			printf("\nSquare value is : %d",value);
	 			
				 for(digit=1;digit<=1;digit++)
	 			{
	 				Tnum=pow(value,3);
	 				
					 printf("\t\tCube value is :%d",Tnum);
				 }
			 }
	 		
	 		
	 		break;
	 	case 2:
	 		printf("\nEnter number 1 : ");
	 		scanf("%d",&num1);
	 		printf("\nEnter number 2: ");
	 		scanf("%d",&num2);
	 		if(num1>num2)
			 {
			 	printf("\nGreater number is : %d",num1);
			 }	
	 		else{
	 			printf("\nGreater number is : %d",num2);
			 }	
	 			break;
	 	case 3:
	 		printf("Enter table number : ");
	 		scanf("%d",&Tnum);
	 		printf("Enter how many digit : ");
	 		scanf("%d",&digit);
	 		for(i=1;i<=digit;i++)
	 		{
	 			value=Tnum*i;
	 			printf("\n%d * %d = %d",Tnum,i,value);
			 }
			 break;
		default:
			printf("Wrong Choice");
			break;
	 }
}
