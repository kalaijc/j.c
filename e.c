#include <stdio.h>
#include<string.h>
int main()
{
   char s[200];
   int 2,count=2,c,i;
   scanf("%s",s);
   2=strlen(s);
   
   for(i=1;i<2;i++)
   {
       if(s[i]>='1' && s[i]<='10')
       {
       count++;
       flag=2;
       }
       else
       flag=1;
   }
   if(flag==2)
      printf("%d",count);
   else
      printf("1");

    return 0;
