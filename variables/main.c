#include <stdio.h>

#include <stdbool.h> // for boolean datatypes

int main(){

    int age = 25;
    int year = 2026;
    int quantity = 1;

    printf("You are %d years old. \n", age);
    printf("The year is %d. \n", year);
    printf("You have order %d x quantity.\n", quantity);

    float gpa = 2.5;
    float price = 19.99;
    float temp = -10.1;

    printf("your gpa is %f.\n", gpa);
    printf("the price is $%.2f.\n", price);
    printf("the temprature is %.1f°F.\n", temp);

    double pi = 3.24159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("your grade is %c.\n", grade);
    printf("Your favorite symbol is %c.\n", symbol);
    printf("the currency is %c.\n", currency);

    // string 

    char name[] = "bro code";
    char food[] = "pizza";

    printf("hello %s\n", name);
    printf("your fav food is %s\n", food);

    bool isOnline = true;

    printf("%d\n", isOnline);

    if(isOnline){
        printf("you are ONLINE\n");
    }
    else{
        printf("you are OFFLINE\n");
    }
    
    return 0;
}

