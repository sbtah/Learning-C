#include <stdio.h>


int main() {
    // This will throw a warning.
    // In C all initiated variables must have a value. Otherwise this variable will inherit some value from memory.
    int total;
    printf("Total is: %d\n", total);
    return 0;
}