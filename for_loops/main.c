#include <stdio.h>
#include <windows.h>

int main() {

    // for(int i = 0; i <= 10; i+=2){
    //     printf("%d\n", i);
    // }

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("happy new year!\n");


    return 0;
}