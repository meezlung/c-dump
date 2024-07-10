#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    bool is_programming_fun = true;
    bool is_fish_tasty = false;

    printf("%d\n", is_programming_fun);
    printf("%d\n", is_fish_tasty);



    // Comparing variables
    int small = 1;
    int big = 5;
    int is_pizza_good = true;
    int is_burger_good = true;

    printf("Comparing small and big numbers. The answer is %d.\n", small > big);
    printf("Is %d the same as %d? The answer is %d.\n", 10, 10, 10 == 10);
    printf("Is %d the same as %d? The answer is %d.\n", is_pizza_good, is_burger_good, is_pizza_good == is_burger_good);
    


    // Real-life Example
    int my_age = 16;
    int voting_age = 18;

    if (my_age >= voting_age) {
        printf("You are qualified to vote.\n");
    } else {
        printf("You are NOT qualified to vote.\n");
    }

    return 0;
}