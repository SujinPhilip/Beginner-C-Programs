#include <stdio.h>

int main()
{
    int a=0,b=1,result,n,i;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("FIbonacci Series - ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        result =a + b;
        a = b;
        b = result;
    }
}
