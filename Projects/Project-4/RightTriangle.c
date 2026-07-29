#include <stdio.h>

int main(){

    for(int a = 41; a <= 45; a++){

        for(int b = 41; b <= a; b++){
            printf("%d ", b);
        }

        printf("\n");
        
    }

    return 0;
    
}