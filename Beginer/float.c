#include <stdio.h>


int main() {
    printf("Calculate area of your circle!\n");

    float pi, r, answer;
    pi = 3.14;

    printf("What is the radius in cm?\n");

    scanf("%f", &r);

    answer = r * r * pi;

    printf("The area of your circle is: %f\n", answer);

    return 0;
}
