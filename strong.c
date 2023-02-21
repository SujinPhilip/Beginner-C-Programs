#include <stdio.h>

int main()
{   int n,i,fact,rem,q,result;
    printf("Enter the Number\n");
    scanf("%d",&n);
    q=n; result=0;fact=1;
    while(q!=0)
    {
        rem=q%10;
        for (i = 1; i <= rem; i++)
            fact *= i;
        result+=fact;
        fact=1;
        q=q/10;
    }
    if(result==n)
        printf("It is a strong Number");
    else
        printf("It is not a strong Number");
}
