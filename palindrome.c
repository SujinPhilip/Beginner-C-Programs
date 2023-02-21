#include <stdio.h>

int main()
{
    int number,quotient,remainder,result=0;
    printf("enter the number\n");
    scanf("%d",&number);
    quotient=number;
    while(quotient!=0)
    {
        remainder=quotient%10;
        result=result*10 + remainder;
        quotient=quotient/10;
    }
    if(result==number)
        printf("It is a Palindrome");
    else
        printf("It is not a Palindrome");
}
