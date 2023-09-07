#include <stdio.h>

int main() {
    int number1;
    int number2;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);

    result = number1 * number2;
    printf("Result: %d\n", result);
    
    return 0;
}