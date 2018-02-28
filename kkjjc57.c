#include <stdio.h>
int main(void) 
{
int x,y,temp;
printf("\nEnter two numbers to swap:");
scanf("%d %d",&x,&y);
printf("\n Before swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
temp=x;
x=y;
y=temp;
printf("\n After swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
