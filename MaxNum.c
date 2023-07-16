#include <stdio.h>
int main()
{
	int a[]={33,5,55,21,2};
	
	int max=a[0];
	
	for(int i=0;i<5;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}
	}
	printf("Maximum Number is:%d",max);
		
}
