#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) { // Purpose is to set the number of lines
        for (j = 1; j <= i; j++) { // Purpose is to set the number of asterisk per line
            printf("*");
        }
        printf(" -> %d\n", i);
    }
    return 0;
}
