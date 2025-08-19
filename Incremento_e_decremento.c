#include <stdio.h>
#include <string.h>

int main() {
    int x, y;

    x = 10; y = x++;                // Atribui 10 a x, depois incrementa x para 11, y recebe 10
    printf("y = x++ : valor de y = %d\n", y);
    printf("y = x++ : valor de x = %d\n\n", x);

    x = 10; y = ++x;                // Incrementa x para 11, depois atribui 11 a y
    printf("y = ++x : valor de y = %d\n", y);
    printf("y = ++x : valor de x = %d\n\n", x);

    x = 10; y = x--;                // Atribui 10 a y, depois decrementa x para 9
    printf("y = x-- : valor de y = %d\n", y);
    printf("y = x-- : valor de x = %d\n\n", x);

    x = 10; y = --x;                // Decrementa x para 9, depois atribui 9 a y
    printf("y = --x : valor de y = %d\n", y);
    printf("y = --x : valor de x = %d\n\n", x);
    
    return 0;
}