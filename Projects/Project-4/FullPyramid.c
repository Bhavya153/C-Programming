#include <stdio.h>

int main() {
    int a, b, k;
   
    for(  a = 1; a <= 5; a++){

        for(k = 5; k > a; k--){
            printf("  ");
        }

        for(b = 6 - a; b <= 5; b++){
            printf("%d ", b);
        }

        for(b = 4; b >= 6 - a; b--){
            printf("%d ", b);
        }

        printf("\n");
    }

    return 0;
}