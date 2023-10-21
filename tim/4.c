#include <stdio.h>


int main(int argc, char *argv) {

    char str[100];
    int i;

    printf("Enter a value: \n");

    scanf("%d %s", &i, str);

    printf("\nYou entered: %d ::: %s \n", i, str);

    return 0;
}