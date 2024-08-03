#include <stdio.h>


int main() {
    // Declaring a variable:
    char name[32];

    printf("Hello what is your name?\n");

    // Reading input from a keyboard:
    scanf("%s", name);

    // Using variable.
    printf("Hello %s!\n", name);

    return 0;
}
