#include<stdio.h>

int main(){

  for (int a = 1; a <= 5; a++){

        for (int k = 5; k > a; k--){
            printf("  ");
        }

        for (int b = 6 - a; b <= 5; b++){
            printf("%d ", b);   
        }

        printf("\n");
        
    }


}

