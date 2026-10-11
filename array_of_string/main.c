#include <stdio.h>

int main(){

    char fruits[][10] ={"Apple", "Banana", "Coconut"};

    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';

    for(int i = 0; i < size; i++){
        printf("%s ", fruits[i]);
    }


    return 0;
}