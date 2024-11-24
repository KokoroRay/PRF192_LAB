#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a, b, testIn =0;
    printf("How many element of numeric array A ?");
    scanf("%d", &a);
    int *arrA = (int *)malloc(a * sizeof(int));
    if (a < 0) {
        printf("The number of elements of array A must be greater than 0!");
    }
    else {
        printf("Please enter value for %d elements\n]", a);
        for (int i = 0; i < a; i++) {
            if (i == 0) {
                printf("Value of the %dst element is:", (i + 1));
                scanf("%d", &arrA[i]);
            }
            else if (i == 1) {
                printf("Value of the %dnd element is:", (i + 1));
                scanf("%d", &arrA[i]);
            }
            else if (i == 2) {
                printf("Value of the %drd element is:", (i + 1));
                scanf("%d", &arrA[i]);
            }
            else {
                printf("Value of the %dth element is:", (i + 1));
                scanf("%d", &arrA[i]);
            }
        }
        printf("How many elements of numeric array B?");
        scanf("%d", &b);
        if (b < 0) {
            printf("The number of element of array B must be greater than 0!\n");
            do {
                printf("How many elements of numeric array B?");
                scanf("%d", &b);                
            } while (b > 0);
        }
        printf("Please enter value for %d elements:\n",b);
        int *arrB = (int*)malloc(b * sizeof(int));
        for (int i = 0; i < b; i++) {
            printf("Value of the %dth element is:", (i + 1));
            scanf("%d", &arrB[i]);
        }
        printf("The array A is:\n");
        printf("%d", arrA[0]);
        for (int i = 1; i < a; i++) {
            printf(" ,%d", arrA[i]);
        }
        printf("\nThe array B is:\n");
        printf("%d", arrB[0]);
        for (int i = 1; i < b; i++) {
            printf(" ,%d", arrB[i]);
        }
        printf("\nTHe merged array after A and array B into once array that sorted ascending:\n");
        int size = a + b;
        int *arrAB = (int*)realloc(arrA, size * sizeof(int));
        for (int i = a; i < size; i++){
            arrAB[i] = arrB[i - a];
        }
        for (int i =0; i < size -1; i++) {
            for(int j = i + 1; j < size; j++) {
                if (arrAB[i] < arrAB[j]) {
                    testIn = arrAB[i];
                    arrAB[i] = arrAB[j];
                    arrAB[j] = testIn;
                }
            }
        }
        printf("%d", arrAB[0]);
        for (int i = 1; i < size; i++) {
            printf(" ,%d", arrAB[i]);
        }
        free(arrAB);
        free(arrA);
        free(arrB);
    }
    return 0;
}
