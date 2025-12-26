#include <stdio.h>  

int main() {              //PRACTICAL 07: Q.no.3:-Print the pattern: A, AB, ABC, ABCD//
    int n;
    printf("Enter number of lines: ");  //Aishwarya Sharma, ERP-10122//
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
} 
//Output//
// Enter number of lines: 4
// A
// AB
// ABC
// ABCD
