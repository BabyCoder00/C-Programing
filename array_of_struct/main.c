#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;

}Car;

int main(){

    Car cars[] = {
        {"f1", 2026, 1000000},
        {"f2", 2026, 100000},
        {"f3", 2026, 10000}
    };

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }




    return 0;
}