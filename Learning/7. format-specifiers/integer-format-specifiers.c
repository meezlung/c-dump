#include <stdio.h>

int main() {
    int num = 42;
    unsigned int unum = 123;
    int octal = 075; // Octal representation (starts with 0)
    int hex = 0x1A;  // Hexadecimal representation (starts with 0x)
    int binary = 0b101011; // Binary representation (starts with 0b)

    printf("Decimal: %d\n", num);
    printf("Unsigned Decimal: %u\n", unum);
    printf("Octal: %o\n", octal);
    printf("Hexadecimal (lowercase): %x\n", hex);
    printf("Hexadecimal (uppercase): %X\n", hex);

    return 0;
}
