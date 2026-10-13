#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "qwerty qwwerty qwerty\n qwertyqwerty";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("file was written successfully\n");

    fclose(pFile);
    return 0;
}