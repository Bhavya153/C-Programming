#include <stdio.h>

int main() {

    int rows, col;

    printf("Enter row size: ");
    scanf("%d", &rows);

    printf("Enter column size: ");
    scanf("%d", &col);

    int arr[rows][col];

    printf("\nEnter array elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d. \n", largest);

    return 0;
}