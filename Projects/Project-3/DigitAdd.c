#include<stdio.h>

int main(){
    int num, first,last;

    printf("Enter a number: ");
    scanf("%d",&num);

    last = num % 10;

    while (num >= 10){
        num = num/10;
    }

    first = num;

    printf("The Sum of first and last digits = %d ", first + last);

    return 0;

}