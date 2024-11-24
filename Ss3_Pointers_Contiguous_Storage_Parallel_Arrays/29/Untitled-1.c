#include <stdio.h>
#include <stdlib.h>

void findIsZero(int** arr, int row, int col) {
    int zero = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (0 == arr[i][j]) {
                zero++;
            }
        }
    }
    printf("The number of the 0 in the matrix is: %d\n", zero);
}

void minimum(int** arr, int row, int col) {
    int minimum;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] < minimum) {
                minimum = arr[i][j];            
            }
        }
    }
    printf("The minimum value in the matrix is %d\n", minimum);
}

void maximum(int** arr, int row, int col) {
    int maximum; 
    for (int i = 0; i <row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }
    printf("The maximum value in the matrix is %d\n", maximum);
}

int main(int argc, char const *argv[])
{
    /* code */
    int row, col;
    printf("Please enter value for the matrix A:\n");
    printf("Please enter number of row:");
    scanf("%d", &row);
    if (row < 0) {
        printf("The number of rows must greater than 0");
    }
    else {
        printf("Please enter number of columns:");
        scanf("%d", &col);
        if (col < 0) {
            printf("The number of columns must greater than 0");
        }
        else {
            int **arr = (int **)malloc(row * sizeof(int*));
            for (int i = 0; i < row; i++) {
                arr[i] = (int *)malloc(col * sizeof(int));
            }
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    printf("Please enter value for a[%d][%d]: ",(i + 1), (j + 1));
                    scanf("%d", &arr[i][j]);
                }
            }
            findIsZero(arr, row, col);
            minimum(arr, row, col);
            maximum(arr, row, col);
            
            free(arr);
        }
    }
    
    return 0;
}
