#include <stdio.h>
#include <stdlib.h>

void matrixProductC(int** arr, int** arrSec, int firstRow, int firstCol) {
    int **arrC = (int**)malloc(firstRow * sizeof(int*));
    for (int i = 0; i < firstRow; i++) {
        arrC[i] = (int*)malloc(firstCol * sizeof(int));
    } 
    printf("the matrix matrix C = A + B is\n");
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < firstCol; j++) {
            arrC[i][j] = arr[i][j] + arrSec[i][j];
        }
    }
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < firstCol; j++) {
            printf("%d ", arrC[i][j]);
        }
        printf("\n");
    }
    free(arrC);
}

int main(int argc, char const *argv[])
{
    /* code */
    int FirstRow, FirstCol, SecRow, SecCol;
    printf("Please enter value for the first matrix A:\n");
    printf("Please enter number of rows:");
    scanf("%d", &FirstRow);
    if (FirstRow < 0) {
        printf("The number of columns must greater than 0");
    }
    else {
        printf("Please enter number of columns:");
        scanf("%d", &FirstCol);
        if (FirstCol < 0) {
            printf("The number of columns must greater than 0");
        }
        else {
            int **arr = (int**)malloc(FirstRow * sizeof(int*));
            for(int i = 0; i < FirstRow; i++) {
                arr[i] = (int*)malloc(FirstCol * sizeof(int));
            }
            for (int i = 0; i < FirstRow; i++) {
                for (int j = 0; j < FirstCol; j++) {
                    printf("Please enter value for a[%d][%d]:", (i + 1), (j + 1));
                    scanf("%d", &arr[i][j]);
                }
            }

            printf("-------------------------\n");
            printf("Please enter value for the second matrix B:\n");
            printf("Please enter number of rows:");
            scanf("%d", &SecRow);
            if (SecRow < 0) {
                printf("The number of rows must greater than 0");
            }
            else {
                printf("Please enter number of columns:");
                scanf("%d", &SecCol);
                if (SecCol < 0) {
                    printf("The number of columns must greater than 0");
                }
                else {
                    int **arrSec = (int **)malloc(SecRow * sizeof(int*));
                    for (int i = 0; i < SecRow; i++) {
                        arrSec[i] = (int *)malloc(SecCol * sizeof(int));
                    }
                    for (int i = 0; i < SecRow; i++) {
                        for (int j = 0; j < SecCol; j++) {
                            printf("Please enter value for B[%d][%d]", (i + 1), (j + 1));
                            scanf("%d", &arrSec[i][j]);
                        }
                    }
                    matrixProductC(arr, arrSec, FirstRow, FirstCol);

                    free(arrSec);
                }
            }
        free(arr);
        }
    }
    return 0;

}

