#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main(){
    hello("bro", 20);

    if (ageCheck(30)){
        printf("you are old enough to work in the krusty krab\n");
    }
    else{
        printf("you must be 16+ to work at the krusty kab\n");
    }

    return 0;
}

void hello(char name[], int age){
    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}