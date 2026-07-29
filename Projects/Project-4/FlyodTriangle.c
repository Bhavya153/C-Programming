#include<stdio.h>

int main(){
    int num =11;

    for(int a = 1; a <= 4; a++){

        for(int b = 1; b <= a; b++){
            printf("%d ", num);
            num++;
        }
        
        printf("\n");

    }

    return 0;

}