#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int arr[50], n, searchValue, test, a;
    printf("How many elements of numeric array?\n");
    scanf("%d", &n);
    if (n < 0 ) {
        printf("The number of element of numeric array  must be greater than 0!");
    }
    else {
        printf("Please enter value for  %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            printf("Value of the %dst element is: ", i);
            scanf("%d", &arr[i]);
        }
        printf("The entered array is:\n");
        printf("%d", arr[0]);
        for (int i = 1; i < n; i++) {
                printf(", %d", arr[i]);
        }
        printf("\nPlease enter the value that you want to find:");
        scanf("%d", &searchValue);
        for (int i = 0; i < n; i++) {
            if (arr[i] == searchValue) {
                a = arr[i];
                test = 1;
                break;
            }
            else {
                test = 0;
            }
        }
        if (test == 1) {
            printf("The last element which value is %d found at index [%d]", a, searchValue);  
        }
        else {
            printf("The value %d is not found in this array", searchValue);
        }

    }


    return 0;
}
