#include <stdio.h>

int main(void) 
{
	int array[30];
	int n,i,max=array[1];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=1;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}
