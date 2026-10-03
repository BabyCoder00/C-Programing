#include <stdio.h>

int main(){

    int number = 0;

    // while(number <=0){
    //     printf("Enter a number greateer then zero: ");
    //     scanf("%d", &number);
    // }

    do{
        printf("Enter a number greateer then zero: ");
        scanf("%d", &number);
    }while(number <=0);

    return 0;
}