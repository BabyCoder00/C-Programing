#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("you are playing a game\n");
        printf("would you like to continue the game (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y'){
            isRunning = false;
        }
    }

    printf("\nyou exit the game");

    return 0;
}