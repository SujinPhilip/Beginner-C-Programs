#include <stdio.h>
int main ()
{
    int luckynumber =6;
    int guess;
    while ( guess != luckynumber )
    {
        printf ("Enter a number\n");
        scanf ("%d", &guess);
        if (guess!=luckynumber)
            printf ("Try Again!!!\n");
    }
    printf("Yayyy! You Did It");
}
