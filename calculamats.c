#include <stdio.h>
#include <string.h>

int main() {
    char operador;
    int num1;
    int num2;
    int resultado;
    char resposta;

    printf("Bem-vindo ao CalculaMats!! \n");
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite a operacao: \n");
    scanf(" %c", &operador);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
   
    switch (operador) {
        case '+':
        resultado = num1 + num2;
        printf("resultado: %d\n", resultado);
        break;
        case '-':
        resultado = num1 - num2;
        printf("Resultado: %d\n", resultado);
        break;
        case '*':
        resultado = num1 * num2;
        printf("Resultado: %d\n", resultado);
        break;
        case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %d\n", resultado);
        }
        else {
            printf("Erro: Nao existe divisao por zero!\n");
        }
        break;
        default:
        printf("Operador invalido!\n");
    }

        printf("Deseja realizar outra operacao? (s/n): ");
    scanf(" %c", &resposta);                         // Lê a resposta do usuário
    if (resposta == 's' || resposta == 'S') {       // Se a resposta for 's' ou 'S', reinicia o programa
        main();                                    // Chama a função main novamente para reiniciar o programa  
    } 
    else {
        printf("Obrigado por usar o CalculaMats!\n");
    }

    return 0;
}