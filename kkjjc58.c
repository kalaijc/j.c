#include <stdio.h>
int main(void) 
{
int x,y,temp;
printf("\n Enter Two Numbers To Swap:");
scanf("%d %d",&x,&y);
printf("\n Before Swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
temp=x;
x=y;
y=temp;
printf("\n After Swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
