#include <stdio.h>

int main() {
    // Values + values
    int sum = 100 + 50;

    printf("The sum is %d.\n", sum);


    // Values + variables
    int sum1 = 100 + 50;
    int sum2 = sum1 + 50;
    int sum3 = sum2 + sum1;

    printf("There are so many sums but the result of each is:\n");
    printf("sum1: %d\n", sum1);
    printf("sum2: %d\n", sum2);
    printf("sum3: %d\n", sum3);


    /*
    Arithmetic Operators         Name            Description                                Example
    +                            Addition        Add                                        x + y
    -                            Subtraction     Subtract                                   x - y
    *                            Multiplication  Multiply                                   x * y
    /                            Division        Divide                                     x / y
    %                            Modulus         Returns the division remainder             x % y
    ++                           Increment       Increases the value of a variable by 1     ++x
    --                           Decrement       Decreases the value of a variable by 1     --x
    */


   /*
   Operator 	Example 	Same As 	
    = 	         x = 5 	     x = 5 	
    += 	         x += 3 	x = x + 3 	
    -= 	         x -= 3 	x = x - 3 	
    *= 	         x *= 3 	x = x * 3 	
    /= 	         x /= 3 	x = x / 3 	
    %= 	         x %= 3 	x = x % 3 	
    &= 	         x &= 3 	x = x & 3 	 Bitwise AND Operator
    |= 	         x |= 3 	x = x | 3 	 Bitwise OR Operator
    ^= 	         x ^= 3 	x = x ^ 3 	 Bitwise XOR Operator
    >>= 	     x >>= 3 	x = x >> 3 	
    <<= 	     x <<= 3 	x = x << 3
   */

    int bit_a = 0b0000000000000101;
    int bit_b = 0b0000000000101110;

    printf("%d\n", bit_a);
    printf("%d\n", bit_a << 1);

    // Print the binary representation of bit_a
    for (int i = 15; i >= 0; i--) {
        int bit = (bit_a >> i) & 1;
        printf("%d", bit);
    }
    printf("\n"); // 0000000000000101

    // Print the binary representation of bit_a left shifted by 1
    for (int i = 15; i >= 0; i--) {
        int bit = ((bit_a << 1) >> i) & 1;
        printf("%d", bit);
    }
    printf("\n"); // 0000000000001010

    // Print the binary representation of bit_b
    for (int i = 15; i >= 0; i--) {
        int bit = (bit_b >> i) & 1;
        printf("%d", bit);
    }
    printf("\n"); // 0000000000101110
    
    // AND Operator (&)
    printf("AND Operator\n");
    int bit_and = bit_a & bit_b;
    
    for (int i = 15; i >= 0; i--) {
        int bit = (bit_and >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");


    // OR Operator (|)
    printf("OR Operator\n");
    int bit_or = bit_a | bit_b;

        for (int i = 15; i >= 0; i--) {
        int bit = (bit_or >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    // XOR Operator (^)
    printf("XOR Operator\n");
    int bit_xor = bit_a ^ bit_b;

        for (int i = 15; i >= 0; i--) {
        int bit = (bit_xor >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    printf("The resulting OR operator of a and b for b is %d.\n", bit_b);

    /*
    Comparison Operators
    Operator 	Name 	                    Example 	
    == 	        Equal to 	                x == y 	
    != 	        Not equal 	                x != y 	
    > 	        Greater than 	            x > y 	
    < 	        Less than 	                x < y 	
    >= 	        Greater than or equal to 	x >= y 	
    <= 	        Less than or equal to 	    x <= y
    */

    /*
    Logical Operators

    Operator 	Name 	           Description 	                                                Example 	
    &&  	    Logical and 	   Returns true if both statements are true 	                x < 5 &&  x < 10 	
    ||  	    Logical or 	       Returns true if one of the statements is true 	            x < 5 || x < 4 	
    ! 	        Logical not 	   Reverse the result, returns false if the result is true 	    (x < 5 && x < 10)
    */



    // Sizeof Operator
    //  - used to show the memory size in a variable

    int my_int = 1;
    float my_float = 6.99;
    double my_double = 6.9999;
    char my_char = 'T';

    printf("Size of int in bytes: %ld\n", sizeof(my_int));
    printf("Size of float in bytes: %ld\n", sizeof(my_float));
    printf("Size of double in bytes: %ld\n", sizeof(my_double));
    printf("Size of char in bytes: %ld\n", sizeof(my_char)); 
    return 0;
}