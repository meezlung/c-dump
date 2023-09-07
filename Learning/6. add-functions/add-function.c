#include <stdio.h>

// Declare the function
int add(int a, int b);

// Main
int main () {
    int num1;
    int num2; 

    printf("Enter a number: ");
    scanf("%d\n", num1);
    printf("Enter another number: ");
    scanf("%d\n", num2);

    int result = add(num1, num2);
    printf("Adding %d to %d is equal to %d", num1, num2, result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}