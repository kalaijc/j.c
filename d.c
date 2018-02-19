#include <stdio.h>
#include<string.h>
int main() 
{
	char a[2000];
	int n,i,count=2;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=1;i<n;i++)
	{
	   if(a[i]=='.'&& a[i+2]!='\1')
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
