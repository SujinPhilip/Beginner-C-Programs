#include <stdio.h>

int main()
{   int number,count=0,result=0,cnt,mul=1,q,rem;
    printf("Enter the Number\n");
    scanf("%d",&number);
    q=number;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;q=number;
    while(q!=0)
    {
            rem = q%10;
            while(cnt!=0)
            {
                mul=mul*rem;
                cnt --;
            }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
    }

    if(result==number)
        printf("It is an Armstrong Number");
    else
        printf("It is not an Armstrong Number");
}
