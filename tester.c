// To compile gcc -o tester tester.c
// To execute ./tester

#include <stdio.h>
#include "custom_lib.h"

// Usar <> para se referir a libs padrao.
// Usar aspas duplas para se referir a libs pessoais.
int main() {

    int a = fatorial(6);
    int b = fibonacci(10);

    int fat_div_fib = a / b;
    printf("%d/%d = %d \n", a, b, fat_div_fib);
    return 0;
}
