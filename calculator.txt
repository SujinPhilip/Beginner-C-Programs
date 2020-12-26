#include <stdio.h>
int main()
{
    int operator,number1,number2;
    printf("Enter The Operator (+ - * /)\n");
    scanf("%c",&operator);
    printf("Enter Two numbers\n");
    scanf("%d %d", &number1 ,&number2);
    switch(operator)
    {
        case '+':
            printf("Sum = %d",number1 + number2);
            break;
        case '-':
            printf("Difference = %d",number1-number2);
            break;
        case '*':
            printf("Multiply = %d", number1*number2);
            break;
        case '/':
            printf("Division = %d",number1/number2);
            break;
        default:
            printf("error");
    }
    return 0;
}
