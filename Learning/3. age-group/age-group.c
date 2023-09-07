#include <stdio.h>

int main() {
    char name[100]; // Assuming a maximum name length of 100
    int age;

    printf("Name: ");
    scanf("%d", &name);
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Hi, %d. Since you're %d, you are a minor.\n", name, age);
    } 
    else if (age >= 18 && age <= 65) {
        printf("Good day, %d. Since you're %d, you are an adult. \n", name, age);
    }
    else {
        printf("Top of the morning to ya, %d. Since you're %d, you are a senior citizen.\n", name, age);
    }

    return 0;
}