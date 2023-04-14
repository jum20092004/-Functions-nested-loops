#include "main.h"
int print_last_digit(int n){
    if (n < 0){
        n = n * -1;
    }
    int lastDigit;
    lastDigit = n % 10;
    _putchar(lastDigit + '0');
    return lastDigit;
}