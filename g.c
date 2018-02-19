#include<stdio.h>
#include<string.h>
int main()
{
	int y,z,temp;
	scanf("%d\t%d",&y,&z);
	temp=y;
	y=z;
	z=temp;
	printf("%d\t%d",y,z);
	return 0;
}
