#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isOnline = true;

    printf("%s", isOnline ? "online" : "offline");

    int number = 8;
    printf("\n%d is %s", number, number % 2 == 0 ? "even" : "odd");


    return 0;
}