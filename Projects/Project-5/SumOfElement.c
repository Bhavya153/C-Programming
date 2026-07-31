#include <stdio.h>

int main() {
    int rows, col;

    printf("Enter row size: ");
    scanf("%d", &rows);

    printf("Enter column size: ");
    scanf("%d", &col);

    int arr[rows][col];

    printf("Enter array's elements:\n");

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

  
    int rowNum, rowSum = 0;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    for (int j = 0; j < col; j++) {
        printf("%d ", arr[rowNum][j]);
        rowSum += arr[rowNum][j];

    }

    printf("\nThe sum of a row %d: %d\n", rowNum, rowSum);

    
    int colNum, colSum = 0;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    printf("Elements of column %d: ", colNum);
    for (int i = 0; i < rows; i++) {
        printf("%d ", arr[i][colNum]);
        colSum += arr[i][colNum];
    }

    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}