#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    printf("How many element of numeric array A?");
    scanf("%d", &a);
    if (a < 0) {
       printf("The number of element of array A must be greater than 0!");  
    }
    else {
        int *arrOfA = (int*)malloc(a * sizeof(int));
        printf("Please enter value for %d elements:\n");
        for(int i = 0; i < a; i++) {
            if (i == 0) {
                printf("Value of the %dst element is:",(i + 1));
                scanf("%d", arrOfA + i);
            }
            else if (i == 1) {
                printf("Value of the %dnd element is:",(i + 1));
                scanf("%d", arrOfA + i);
            }
            else if (i == 2) { 
                printf("Value of the %drd element is:",(i + 1));
                scanf("%d", arrOfA + i);
            }
            else {
                printf("Value of the %dth element is:",(i + 1));
                scanf("%d", arrOfA + i);
            }
        }
        printf("How many element of numeric array B?");
        scanf("%d", &b);
        if (b < 0) {
            do {
                printf("How many element of numeric array B?");
                scanf("%d", &b);
            } while (b > 0);
        }
        else {
            printf("Please enter value for %d elements:\n", b);
            int *arrOfB = (int*)malloc(b * sizeof(int));
            for (int i = 0; i < b; i++) {
                if ((a + i + 1) == 0) {
                    printf("Value of the %dst element is:",(a + i));
                    scanf("%d", arrOfB + i);
                }
                else if ((a + i + 1) == 1) {
                    printf("Value of the %dnd element is:",(a + i));
                    scanf("%d", arrOfB + i);
                }
                else if ((a + i + 1) == 2) { 
                    printf("Value of the %drd element is:",(a + i));
                    scanf("%d", arrOfB + i);
                }
                else {
                    printf("Value of the %dth element is:",(a + i));
                    scanf("%d", arrOfB + i);
                }
            }
        printf("The array A is:\n");
        printf("%d", arrOfA[0]);
        for (int i = 1; i < a; i++) {
            printf(" ,%d", arrOfA[i]);
        }  
        printf("\nThe array B is:\n");
        printf("%d", arrOfB[0]);
        for (int i = 1; i < b; i++) {
            printf(" ,%d", arrOfB[i]);
        }
        printf("\nThe merged array after append all elements of array B after array A is:\n");
        printf("%d", arrOfA[0]);
        for (int i = 1; i < a; i++)
            printf(" ,%d", arrOfA[i]);
        for (int i = 0; i < b; i++)
            printf(" ,%d", arrOfB[i]);
        
        free(arrOfA);
        free(arrOfB);
        }
    }
    return 0;
}
