#include <stdio.h>
int main()
{
	int a[]={33,5,55,21,2};
	
	int min=a[0];
	
	for(int i=0;i<5;i++)
	{
	if(a[i]<min)
	{
		min=a[i];
	}
	}
	printf("Maximum Number is:%d",min);
		
}
