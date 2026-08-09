#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str);

  
    while (str[len] != '\0'){
        len++;
    }

  
    for (i = 0; i < len / 2; i++){
        if (str[i] != str[len - i - 1]){
            flag = 1;
            break;
        }
    }

 
    if (flag == 0) {
        printf("The given string is a Palindrome.\n");
    }
    else{
        printf("The given string is NOT a Palindrome.\n");
    }

    return 0;
}
