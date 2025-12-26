#include <stdio.h>

int main() {            // PRACTICAL 06: Q no.2 :-Sum of even numbers using continue//
    int n, sum = 0;    //Aishwarya Sharma, ERP-10122//

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            continue;  
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;
} 
//Output//
//Enter a positive number: 4
//Sum of even numbers from 1 to 4 = 6
