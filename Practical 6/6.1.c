 #include <stdio.h>

int main() {      //PRACTICAL 6 :-Question no.1:-Print numbers from a to b using loops//
    int a, b; //Aishwarya Sharma, ERP-10122//

    printf("Enter the starting number (a): ");
    scanf("%d", &a);

    printf("Enter the ending number (b): ");
    scanf("%d", &b);

    printf("Numbers from %d to %d: ", a, b);
    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
//Output//
//Enter the starting number (a): 1//
//Enter the ending number (b): 8//
//Numbers from 1 to 8: 1 2 3 4 5 6 7 8 //
