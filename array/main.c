#include <stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    char grade[] = {'A', 'B', 'C', 'D', 'E'}; 
    char name[] = "Bro code";

    numbers[0] = 100;

    printf("%d\n", numbers[0]); 
    printf("%c\n", grade[3]);
    printf("%c\n", name[5]);

    for(int i =0; i<5 ; i++){
        printf("%c\n", grade[i]);
    }

    printf("%d\n", sizeof(name));

    int size = sizeof(name) / sizeof(name[0]);

    printf("%d\n", size);

    for(int i =0; i < size ; i++){
        printf("%c ", name[i]);
    }

    return 0;
}