#include <stdio.h>

int main() {
    // These two values must be float as well as the result variable to output 2.5.
    // If these two values are int and the result is the only float value, it will still output 2.
    float x = 5; 
    float y = 2;

    float result = x / y;
    printf("The result of x / y is %.2f.\n", result);

    int int_x = 5;
    int int_y = 2;
    
    float int_result = x / y;
    printf("The result of int_x / int_y is %.2f.\n", int_result);


    // Two Conversion Approach
    //  - Implicit Conversion (automatically)
    //  - Explicit Conversion (manually)


    // Implicit Conversion (could be risky, as you might lose control in specific values in certain situations)
    float my_float = 9; // <- int stored in a float variable 
    printf("%f\n", my_float);

    int my_int = 9.99; // <- float stored in an int variable
    printf("%d\n", my_int);


    // Explicit Conversion
    float quotient = 5 / 2;
    printf("The quotient is %f.\n", quotient); // Outputs 2.000 because the numbers in quotient variable are still integers

    // To fix that, you need to manually convert those two integers into float.
    float correct_quotient = (float) 5 / 2;
    printf("The correct quotient is %.2f.\n", correct_quotient);

    return 0;
}