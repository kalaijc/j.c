#include<stdio.h>
#include<string.h>
int main()
{
	char str[60];
	int c=1,i;
    scanf("%[^\n]s",str);
    int l;
    l=strlen(str);
	for (i = 1; i<l; i++)
		if (str[i] == ' ')
		c++;
	printf("%d",c);
	return 0;
}
