#include <stdio.h>
#include <stdlib.h>

// Nguyen Minh Tam CE181522
// Code by Tam (Ray)
int main()
{
    int n, m;
    char c;
    printf("Please enter the first integer: ");
    scanf("%d", &n);
    getchar();
    printf("Please enter the operator (+,-,*,/,%): ");
    scanf("%c", &c);
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    {
        printf("Please enter the second integer: ");
        scanf("%d", &m);
        if (m != 0 && c != '%' || c != '/')
        {
            switch (c)
            {
            case '+':
                printf("The result is: %d + %d = %d", n, m, n + m);
                break;
            case '-':
                printf("The result is: %d - %d = %d", n, m, n - m);
                break;
            case '*':
                printf("The result is %d * %d = %d", n, m, n * m);
                break;
            case '%':
                printf("The result is %d %% %d = %d", n, m, n % m);
                break;
            case '/':
                printf("The result is %d / %d = %d", n, m, n / m);
                break;
            }
        }
        else
        {
            printf("The divisor can't be zero!");
        }
    }
    else
    {
        printf("Accept +, -, *, /, %% only!");
    }
    return 0;
}
