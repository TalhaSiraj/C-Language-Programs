#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,num1,num2,ans;
	printf("1:addition\n");
	printf("2:subtraction\n");
	printf("3:multiplication\n");
	printf("4:division\n");
	scanf("%d",& choice);
	switch (choice)
	{
		case 1:
		printf("enter the value for addition ");
		scanf("%d",&num1);
		printf("enter the value for addition ");
		scanf("%d",&num2);
		ans= num1+num2;
		printf("Your answer is %d",ans);
	break;
		case 2:
	    printf("enter the value for subtraction ");
	    scanf("%d",&num1);
	    printf("enter the value for subtraction ");
	    scanf("%d",&num2);
	    ans= num1-num2;
	    printf("Your answer is %d",ans);
	break;
	    case 3:
	    printf("enter the value for multiplication ");
	    scanf("%d",&num1);
	    printf("enter the value for multiplication ");
	    scanf("%d",&num2);
	    ans= num1*num2;
	    printf("Your answer is %d",ans);
	break;
	    case 4:
	    printf("enter the value for division ");
	    scanf("%d",&num1);
	    printf("enter the value for division ");
	    scanf("%d",&num2);
	    ans= num1/num2;
	    printf("Your answer is %d",ans);
	break;
	default:
	printf("you entered wrong key");
	break;
	    
	}

	_getch();
	
	
	
	
	
}
