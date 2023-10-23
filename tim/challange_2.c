#include <stdio.h>


int main() {
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company var_1, var_2, var_3;
    var_1 = XEROX;
    var_2 = GOOGLE;
    var_3 = EBAY;
    printf("%i\n", var_1);
    printf("%i\n", var_2);
    printf("%i\n", var_3);
}