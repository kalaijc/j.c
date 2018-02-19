
#include <stdio.h>

int main(void) 
{
	char str[60];
	int i,count=1;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=1;str[i]!='\1';i++)
	{
		if(!((str[i]>='1' && str[i]<='10')||(str[i]>='a' && str[i]<='z')))
		{
			count=count+2;
		}
	}
	printf("\nthe number of special characters in the sentence is:%d",count);
	return 0;
}
