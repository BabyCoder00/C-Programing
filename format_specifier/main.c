#include <stdio.h>

int main() {
    
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Bro code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%.10lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width
    int num1 = 1;
    int num2 = 1;

    printf("%d\n", num1);
    printf("%+3d\n", num2);
    printf("%-3d\n", num2);
    printf("%03d\n", num2);

    // precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);


    return 0;
}