#include <stdio.h>
#include <string.h>

int main() {

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temprature conversion program");
    printf("C. celsius to fahrenheit\n");
    printf("F. fahrenheit to celsius\n");
    printf("Is the temp in celsius (C) or fahrenheit (F): ");
    scanf("%c", &choice);

    if(choice == 'C'){
        printf("Enter the temp in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.1f celsius is equal to %.1f fahrenheit\n", celsius, fahrenheit);
    }
    else if(choice == 'F'){
        printf("Enter the temp in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit, celsius);
    }
    else{
        printf("Invalid choice!\n");
    }

    return 0;
}