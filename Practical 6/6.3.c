#include <stdio.h>

int main() {                 //PRACTICAL 06: Q.no.3:- ATM Pin Authentication//
    int pin, attempts = 0;
    const int correct_pin = 1234; 

    while(attempts < 3) {
        printf("Enter your 4-digit ATM PIN: ");
        scanf("%d", &pin);

        if(pin == correct_pin) {
            printf("PIN correct. Access granted.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if(attempts == 3) {
        printf("Maximum attempts reached. ATM card blocked.\n");
    }

    return 0;
}