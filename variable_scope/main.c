#include <stdio.h>

int result = 0; // global scope (hard to debug)

int add (int x, int y){
    int result = x + y;
    return result;
}

int sub(int x, int y){
    int result = x - y;
    return result;
}

int main() {

    int result = sub(2, 3);
    printf("%d", result);

    return 0;
}