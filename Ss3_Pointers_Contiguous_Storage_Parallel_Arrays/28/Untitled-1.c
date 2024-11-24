#include <stdio.h>
#include <stdlib.h>


void findSaddleElemets(int** arr, int row, int columns) {
    int *arrMaxRow = (int *)malloc(row * sizeof(int));
    int *arrMinColumn = (int *)malloc(columns * sizeof(int));
    int lastTest[1][1], a, b;
    int testIn = 0;

    for (int i = 0; i < row; i++) {
        arrMaxRow[i] = arr[i][0];
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] > arrMaxRow[i]) {
                arrMaxRow[i] = arr[i][j];
            }
        }
    }
    for (int j = 0; j < columns; j++) {
        arrMinColumn[j] = arr[0][j];
        for(int i = 1; i < row; i++) {
            if (arr[i][j] < arrMinColumn[j]) {
                arrMinColumn[j] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] == arrMaxRow[i] && arr[i][j] == arrMinColumn[j]) {
                testIn ++;
            }
        }
    }
    if (testIn == 0) {
        printf("No saddle element is found in this matrix");
    }
    else if (testIn == 1) {
        printf("All saddle elements of the matrix is found at:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < columns; j++) {
                if (arr[i][j] == arrMaxRow[i] && arr[i][j] == arrMinColumn[j]) {
                    printf("[%d]", arr[i][j]);
                }
            }
        }
        printf("[%d][%d]\n", lastTest[1][1]);
    }
    else {
        printf("All saddle elements of the matrix is found at:\n");
        for(int i = 0; i < row; i++) {
            for (int j = 0; i < columns; j++) {
                if (arrMaxRow == arrMinColumn) {
                    printf("[%d][%d], ", arr[i][j]);
                }
            }
        }
    }

    free(arrMaxRow);
    free(arrMinColumn);
}


int main(int argc, char const *argv[])
{
    /* code */
    int row, columns;
    printf("Please enter value for the matrix A:\n");
    printf("Please enter number of rows:");
    scanf("%d", &row);
    if (row < 0) {
        printf("The number of rows must greater than 0");
    }
    else {
        printf("Please enter number of columns:");
        scanf("%d", &columns);
        if (columns < 0) {
            printf("The number of columns must greater than 0");
        }
        else {
            int **arr = (int **)malloc(row * sizeof(int*));
            for (int i = 0; i < row; i++) {
                arr[i] = (int *)malloc(columns * sizeof(int));
            }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < columns; j++) {
                printf("Please enter value for a[%d][%d]", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        findSaddleElemets(arr, row, columns);
        free(arr);
    }    
    }
    return 0;
}
//em khum phải AI đâu nha - _- code em viết tay ó