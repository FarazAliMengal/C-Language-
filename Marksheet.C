#include <stdio.h>
int main()
{
	int num;
	int num1;
	int num2;
	while(true)
	{
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Divisin\n");
	printf("5.Exit/n");
	
	printf("Select Number:");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Enter 1st Number :");
		scanf("%d",&num1);
		
		printf("Enter 2nd Number:");
		scanf("%d",&num2);
		
		int add=num1+num2;
		printf("Addition is :%d\n",add);
	}
	
	if(num==2)
	{
				printf("Enter 1st Number :");
		scanf("%d",&num1);
		
		printf("Enter 2nd Number:");
		scanf("%d",&num2);
		
		int sub=num1-num2;
		printf("Subtraction is :%d\n",sub);
	}
	
	if(num==3)
	{
		
		printf("Enter 1st Number :");
		scanf("%d",&num1);
		
		printf("Enter 2nd Number:");
		scanf("%d",&num2);
		
		int multi=num1*num2;
		printf("MultiPlication is :%d\n",multi);
	}
	
	if(num==4)
	{
		
		printf("Enter 1st Number :");
		scanf("%d",&num1);
		
		printf("Enter 2nd Number:");
		scanf("%d",&num2);
		
		int div=num1/num2;
		printf("Division is :%d\n",div);
	}
	
	if(num==5)
	printf(0);
	
	return 0;
	}
}
