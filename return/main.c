#include <stdio.h>


double cube(double num){

    return num * num * num;
}

double square(double num){
    double result = num * num;

    return result;
}


int main() {

    double x = square(2);
    double y =  cube(3);
    double z = square(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);



    return 0;
}