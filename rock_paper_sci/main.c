#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);


int main() {

    srand(time(NULL));

    printf("*** rock Paper Scissors ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
            printf("you choosee rock\n");
            break;
        case 2:
            printf("you choosee paper\n");
            break;
        case 3:
            printf("you choosee scissor\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("computer choose rock\n");
            break;
        case 2:
            printf("computer choose paper\n");
            break;
        case 3:
            printf("computer choose scissor\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}


int getComputerChoice(){
    return (rand() % 3) + 1;
}

int getUserChoice(){
    int choice = 0;

    do{
        printf("Choose an option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userChoice, int computerChoice){
    if(userChoice == computerChoice){
        printf("it's a tie\n");
    }
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)){
        printf("you win\n");
    }
    else{
        printf("you lose\n");
    }

}