// Esse algoritmo calcula a potência de um número inteiro elevado a outro número inteiro usando um laço FOR.
// O usuário insere os valores de x e z, onde x é a base e z é o expoente.


#include <stdio.h>
#include <string.h>

int main() {                            // Início do programa FOR.c
    int x, z;                           // Esse programa calcula potência de um número inserido pelo usuário.
    long int res = 1;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    printf("Digite o valor de z: \n");
    scanf("%d", &z);

    for(int i = 0; i < z; i++) {      // o int i é a variavel de controle e só existe dentro do laço do for. o laço so para quando o numero de i for igual ao de z.
        res = res * x;                // a variavel res agora é um acumulador, para assim não perder o valor de x a cada iteração do laço.
    }

    printf("O resultado de %d elevado a %d : %ld\n", x, z, res); // Exibe o resultado da potência



    return 0;
}