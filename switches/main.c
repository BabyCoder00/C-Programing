#include <stdio.h>

int main() {

    int dayOfWeek = 0;

    printf("Enter the value b/w 1 - 7: ");
    scanf("%d", &dayOfWeek);


    switch(dayOfWeek){
        case 1:
            printf("It is monday.");
            break;
        case 2:
            printf("It is tuesday.");
            break;
        case 3:
            printf("It is wednesday.");
            break;
        case 4:
            printf("It is thrusday.");
            break;
        case 5:
            printf("It is friday.");
            break;
        case 6:
            printf("It is satday.");
            break;
        case 7:
            printf("It is sunday.");
            break;
        default:
            printf("Invalid input!");
    }


    return 0;
}