#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {

    int choice = 0;
    float balance = 0.0f;

    printf("*** welcome to bank ***\n");

    do{
        printf("\nSelect an option:\n");
        printf("\n1. check balance\n");
        printf("2. Deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance += deposit();
                break;
        
            case 3:
                balance -= withdraw(balance);
                break;

            case 4:
                printf("\nthank you for using the bank!\n");
                break;
            
            default:
                printf("\n Invalid choice");

        }

    }while(choice != 4);



    return 0;
}


void checkBalance(float balance){
    printf("\n your balance is: $%.2f\n", balance);


}


float deposit(){

    float amount = 0.0f;

    printf("\n enter amount to deposit: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalis amount\n");
        return 0.0f;
    }
    else{
        printf("successfully deposited $%.2f\n", amount);
        return amount;
    }
}


float withdraw(float balance){
    float amount = 0.0f;

    printf("\nenter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient funds!\n");
        return 0.0;
    }
    else{
        printf("sucessfully withdraw $%.2f\n", amount);
        return amount;
    }
}