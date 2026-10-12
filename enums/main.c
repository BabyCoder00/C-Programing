#include <stdio.h>

// enum Day{

//     SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THRUSDAY = 5, FRIDAY = 6, SATURDAY = 7
// };

typedef enum{

    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THRUSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

int main(){
        Day today = SATURDAY;

        if(today == SUNDAY || today == SATURDAY){
            printf("it's a weekend");
        }
        else{
            printf("it's a weekday");
        }


    return 0;
}