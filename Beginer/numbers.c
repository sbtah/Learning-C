#include <stdio.h>


int main() {
    printf("Welcome to simple adder...\n");
    // type int:
    // We can declare as many variables of the same type in one line.
    int x, y, result;

    printf("Please select a number: \n");
    
    // %d is scaning for integers = digits.
    scanf("%d", &x);

    printf("Please select another number: \n");
    
    scanf("%d", &y);

    result = x + y;

    printf("The answer is: %d\n", result);

    return 0;
}
