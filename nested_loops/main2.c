#include <stdio.h>

int main(){

    int rows = 0;
    int cols = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of columns: ");
    scanf("%d", &cols);

    printf("Enter the symbol: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%c ", symbol);
        }
        printf("\n");
    }


    return 0;
}