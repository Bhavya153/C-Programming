#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}

int mod(int a, int b){
    return a % b;
}

int main(){
    int choice, first, second;

    do{

        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for o/o \n");
        printf("Press 0 for Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter first number: ");
        scanf("%d", &first);

        printf("Enter second number: ");
        scanf("%d", &second);


        if(choice == 0){
            break;
        }
        switch(choice){
            case 1:
                printf("Addition of %d and %d is %d\n",first,second, add(first,second));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n",first,second, sub(first,second));
                break;

            case 3:
                printf("Multiply of %d and %d is %d\n",first,second, mul(first,second));
                break;

            case 4:
                if(second == 0){
                    printf("Division by zero is not possible\n");
                }
                else{
                    printf("Division of %d and %d is %d\n",first,second, div(first,second));
                }
                break;

            case 5:
                if(second == 0){
                    printf("Modulo by zero is not possible\n");
                }
                else{
                    printf("Modulo of %d and %d is %d\n",first,second, mod(first,second));
                }
                break;

            

            default:
                printf("Invalid \n");
        }
    }while(choice != 0);

    return 0;
}