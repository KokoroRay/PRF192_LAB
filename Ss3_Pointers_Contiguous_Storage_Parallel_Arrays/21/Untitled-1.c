#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n, arr[20], searchValue, test = 0;
    printf("How many element of numeric array?");
    scanf("%d", &n);
    if (n < 0) {
        printf("The number of element of numeric array must be greater than 0!");
    }
    else {
        printf("\nPlease enter value for %d elements:\n", n);
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
            if (searchValue == arr[i]) {
                test = i;

            }
        }
        if (test == 0) {
            printf("The value %d is not found in this array");
        }
        else {
            printf("All elements whose value are %d are found at index:\n", searchValue);
            for (int i = 0; i <= test - 1; i++) { 
                if (searchValue == arr[i]) {
                    printf("[%d], ", i);
                }
            }
            printf("[%d]", test);
        }
        
    }

    return 0;
}
