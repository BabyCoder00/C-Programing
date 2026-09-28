#include <stdio.h>
#include <stdbool.h>

int main(){

    int temp = 0;
    bool isSunny = true;

    // if(temp > 0 && temp < 30){
    //     printf("Temprature is good.");
    // }
    // else{
    //     printf("Tempreture is bad.");
    // }

    if(temp <= 0 || temp >= 30){
        printf("Temprature is bad.\n");
    }
    else{
        printf("Tempreture is good.\n");
    }

    if(!isSunny){
        printf("It is sunny outside.\n");
    }
    else{
        printf("Its cloudy outside.\n");
    }
    return 0;
}