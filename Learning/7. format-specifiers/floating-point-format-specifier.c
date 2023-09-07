#include <stdio.h>

int main() {
    float fnum = 3.14159;
    double dnum = 2.71828;

    printf("Floating-Point: %f\n", fnum);
    printf("Scientific Notation (lowercase): %e\n", fnum);
    printf("Scientific Notation (uppercase): %E\n", fnum);
    printf("General Format (lowercase): %g\n", dnum);
    printf("General Format (uppercase): %G\n", dnum);

    return 0;
}
