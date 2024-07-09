#include <stdio.h>

int main() {
    // (1)
    // {type} {variable_name} = {value}
    int number = 0;

    printf("The value of this number is %d.\n", number); 


    // (2)
    // You can also declare a variable without assigning a value (unassigned variable), 
    // which then you can use later for assigning variable
    int declared_number;

    declared_number = 1;

    printf("The declared variable has now an assigned value of %d.\n", declared_number); 


    // (3)
    // Format Specifiers
    int my_number = 15;
    float my_float_number = 5.99;
    char my_letter = 'D';    

    printf("%d\n", my_number);
    printf("%f\n", my_float_number);
    printf("%c\n", my_letter);

    int my_num;

    printf("Enter a number: ");
    scanf("%d", &my_num);  // Use &my_num to pass the address of my_num
    printf("You entered: %d\n", my_num);

    printf("Enter another number: ");
    scanf("%i", &my_num);  // Use &my_num to pass the address of my_num
    printf("You entered: %i\n", my_num);

    // (4)
    // Overwriting variable values
    int n = 15; // n is 15
    n = 10; // n is now 10
    char c = 'E';
    c = 'D';

    printf("n is now %d.\n", n);
    printf("c is now %c.\n", c);
    

    // (5)
    // Assigning one variable to another 
    int his_number = 15;
    int his_other_number = 23;

    his_number = his_other_number;

    printf("his number became his other number %d\n", his_number);


    // (6)
    // Multivariables
    int x = 5, y = 6, z = 7;
    x = y = z = 50; // Replace the values
    printf("%d\n", x + y + z);

    return 0;
}