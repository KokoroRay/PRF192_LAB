#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n, oldValue, newValue, test = 0;
    printf("How many elements of numeric array?\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("The number of element of numeric array must be greater than 0!");
    }
    else {
        int *arr = (int*)malloc(n * sizeof(int)); 
        printf("Please enter value for %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            printf("Value of the %d element is:", (i + 1));
            scanf("%d", arr + i);        
        }
        printf("The entered array is:\n");
        printf("%d,",arr[0]);
        for(int i = 1; i < n; i++) {
            printf(" %d", arr[i]);
        }
        printf("\nPlease enter the old value that you want to find:");
        scanf("%d", &oldValue);
        for (int i = 0; i < n; i++) {
            if (oldValue == arr[i]) {
                test = 1;
            }
        }
        if (test == 0) {
            printf("The value %d is not found in this array");
        }
        else {
            printf("Please enter the new value that you want to replace:");
            scanf("%d", &newValue);
            for (int i = 0; i < n; i++) {
                if (oldValue == arr[i]) {
                    arr[i] = newValue;
                }
            }
        }
        printf("The array after replaced all elements whose value is %d by %d\n", oldValue, newValue);
        printf("%d", arr[0]);
        for (int i = 1; i < n; i++) {
            printf(", %d", arr[i]);
        }
    free(arr);
    }
    return 0;
}
