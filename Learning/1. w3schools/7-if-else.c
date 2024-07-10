#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    // Conditions and If Statements
    /*
    Use if to specify a block of code to be executed, if a specified condition is true
    Use else to specify a block of code to be executed, if the same condition is false
    Use else if to specify a new condition to test, if the first condition is false
    Use switch to specify many alternative blocks of code to be executed
    */

    int my_num, square_root;

    printf("Enter a number: ");
    scanf("%d", &my_num);

    if (my_num > 0) {
        printf("Your number, %d, is a positive number.\n", my_num);
    } else if (my_num < 0) {
        printf("Your number, %d, is a negative number.\n", my_num);
        printf("Remember always be positive. %d.\n", square_root = sqrt(my_num * my_num));
    } else {
        printf("Awit itlog.\n");
    }



    // Short Hand If Else (Ternary Operator)
    // Syntax
    // variable = (condition) ? expressionTrue : expressionFalse;

    // Instead of writing
    int time = 20;
    if (time < 18) {
    printf("Good day.\n");
    } else {
    printf("Good evening.\n");
    } 

    // Write
    int other_time = 20;
    (other_time < 18) ? printf("Good day.\n") : printf("Good evening.\n");

    return 0;
}