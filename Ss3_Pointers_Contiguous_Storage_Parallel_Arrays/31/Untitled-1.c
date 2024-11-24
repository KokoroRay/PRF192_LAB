#include <stdio.h>
#include <stdlib.h>

void mathematicsMatrix(int** arrA, int** arrB, int row, int column, int total) {
    int **arrC = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++) {
        arrC[i] = (int*)malloc(column * sizeof(int));
    }
        printf("The matrix C = A * B is\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                int totalArrC = 0;
                for (int k = 0; k < total; k++) {
                    totalArrC += arrA[i][k] * arrB[k][j];
                    arrC[i][j] = totalArrC;
                }
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < total; j++) {
                printf(" %d", arrC[i][j]);
            }
        }
        free(arrC);
}


int main(int argc, char const *argv[])
{
    /* code */
    int firRow, firCol, secRow, secCol;
    printf("Please enter value the for the first matrix A\n");
    printf("Please enter number of rows:");
    scanf("%d", &firRow);
    if ( firRow < 0) {
        printf("The number of columns must that 0");
    }
    else {
        printf("Please enter number of columns:");
        scanf("%d", &firCol);
        if (firCol < 0) {
            printf("The number of columns must that 0");
        }
        else {
            int **arrA = (int**)malloc(firCol * sizeof(int*));
            for (int i = 0; i < firRow; i++) {
                arrA[i] = (int*)malloc(firCol * sizeof(int));
            }
            for (int i = 0; i < firRow; i++) {
                for (int j = 0; j < firCol; j++) {
                    printf("Please enter value for A[%d][%d]", (i + 1), (j + 1));
                    scanf("%d", &arrA[i][j]);
                }
            }
            printf("---------------\n");
            printf("Please enter value the for second matrix B:\n");
            printf("Please enter number of rows:");
            scanf("%d", &secRow);
            if (secRow < 0) {
                printf("The number of columns muse that 0");
            }
            else {
                printf("Please enter number of columns:");
                scanf("%d", &secCol);
                if (secCol < 0){
                    printf("The number oif columns muse that 0");
                }
                else {
                    int **arrB = (int**)malloc(secRow * sizeof(int*));
                    for (int i = 0; i < secRow; i++) {
                        arrB[i] = (int*)malloc(secCol * sizeof(int));
                    }
                    for (int i = 0; i < secRow; i++){
                        for (int j = 0; j < secCol; j++) {
                            printf("Please enter value for B[%d][%d]", (i + 1), (j + 1));
                            scanf("%d", &arrB[i][j]);
                        }
                    }
                    if (firCol == secRow){
                        mathematicsMatrix(arrA, arrB, secRow, secCol, firCol);
                    }
                    else {
                        printf("Can't calculate A*B because of invalid number of rows of matrix B!");
                    }

                }
            }
        }
    }
    return 0;
}
