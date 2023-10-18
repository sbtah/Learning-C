#include <stdio.h>


int add_numbers(int a, int b, int c)
{
    int result = a + b + c;
    return result;
}


int main() {

    // Declaration
    int my_number = 0;
    int other;
    float aerial_number = 4.5;
    int result;

    my_number = 24;
    other = 17;
    result = my_number + other;

    printf("Hello World! %i %i %i %f\n", my_number, other, result, aerial_number);
    printf("add_numbers: %i\n", add_numbers(3, 66, 42));
}
