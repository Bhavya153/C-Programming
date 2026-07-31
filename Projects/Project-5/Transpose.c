#include <stdio.h>

int main() {
    int rows, col;

    printf("Enter row size: ");
    scanf("%d", &rows);

    printf("Enter column size: ");
    scanf("%d", &col);

    int arr[rows][col];
    int transpose[col][rows];

    printf("Enter array's elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    
    printf("\nTranspose Matrix:\n");

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < rows; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}