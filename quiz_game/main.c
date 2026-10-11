#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What palnet has the most moons?"};

    char options[][100] = {"A. Jupyter\nB. Saturn\nC. Uranus\nD. Neptune",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                            "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn"};

    char answerkey[] = {'A', 'B', 'D'};

    int questioncount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** Quize game ***\n");

    for(int i = 0; i< questioncount; i++){
        printf("\n%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerkey[i]){
            printf("Correct!\n");
            score++;
        }
        else{
            printf("Wrong!\n");
        }

    }

    printf("Your score is %d out of %d points\n", score, questioncount);
    



    return 0;
}