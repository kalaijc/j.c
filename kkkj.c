#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d yes",n);
    else
        printf("%d is no",n);
    
    getch();
}
