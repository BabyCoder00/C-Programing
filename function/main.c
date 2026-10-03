#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){

    printf("\nHappy Biirthday to you!");
    printf("\nHappy Biirthday to you!");
    printf("\nHappy Biirthday to dear %s!", name);
    printf("\nHappy Biirthday to you!");
    printf("\nYou are %d years old!", age);

}


int main() {
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);


    return 0;
}