#include <stdio.h>

int main() {
    const int number = 15;
    // number = 10; will show error 

    const int minutes_per_hour = 60;
    const float pi = 3.14;

    /*
    This will not work

    const int minutes_per_hour; // Note: This line is just useless.
    minutes_per_hour = 60; <- Expression must be a modifiable variable
    */

    // Note: It is recommended to name CONSTANT variables in all UPPERCASE for good practice.
    const int BIRTHYEAR = 2005;
    
    printf("Constant number can never be replaced, %d.\n", number);
    return 0;
}