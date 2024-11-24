#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, temp;
    printf("Please enter the value for variable A:");
    scanf("%d", &n);
    printf("Please enter the value for variable B:");
    scanf("%d", &m);
    printf("These two variables before swapped are: A = %d and B = %d\n", n, m);
    temp = n;
    n = m;
    m = temp;
    printf("These two variables after swapped are: A = %d and B = %d", n, m);
    return 0;
}
