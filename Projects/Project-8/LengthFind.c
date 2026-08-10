#include <stdio.h>

int main(){
    char str[100];
    int length;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1;

    printf("The length of a string is: %d", length);

    return 0;
}