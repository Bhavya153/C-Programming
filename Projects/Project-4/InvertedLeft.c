#include<stdio.h>

int main(){
   
    for(int a = 5; a >= 1; a--){
       
        for(int k = 5; k > a; k--){
            printf("  ");
        }

        for(int b = 1; b <= a; b++) {
            if(b == 1 || b == 3 || b == 5)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
        
    }

    return 0;

}