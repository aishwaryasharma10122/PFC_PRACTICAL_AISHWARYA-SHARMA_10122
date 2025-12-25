#include <stdio.h>

//  PRACTICAL 08:Q no.3 :-  Function to print right-angle triangle //
void printTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}