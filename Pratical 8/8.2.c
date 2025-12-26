#include <stdio.h>

// PRACTICAL 08:Q no.2:-Function to swap two numbers using pointers //
void swap(int *a, int *b) {  //Aishwarya Sharma, ERP-10122//
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // pass addresses
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
} 
//output//
// Enter two numbers: 2
// 6
// Before swap: x = 2, y = 6
// After swap: x = 6, y = 2
