#include <stdio.h>

#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char rua[100];
    int numero;
} Cadastro;

int main() {
    char Resposta;
    Cadastro c1;
    Cadastro c2;
    

    printf("Bem-vindo ao sistema de cadastro!\n");
    printf("\nDigite o nome: ");
    fgets(c1.nome, 50, stdin);
    printf("Digite a idade: ");
    scanf("%d", &c1.idade);
    getchar(); // Limpa o buffer do teclado
    printf("Digite a rua: ");
    fgets(c1.rua, 100, stdin);
    printf("Digite o numero: ");
    scanf("%d", &c1.numero);
    getchar(); // Limpa o buffer do teclado
    printf("\nCadastro realizado com sucesso!\n");

    printf("\nDados cadastrados:\n");
    printf("Nome: %s", c1.nome);
    printf("Idade: %d\n", c1.idade);
    printf("Rua: %s", c1.rua);
    printf("Numero: %d\n", c1.numero);

    printf("\nObrigado por utilizar o sistema.\n");
    printf("Vamos fazer outro cadastro? \n");           // observar o codigo a partir daqui, pois não esta funcionado bem.
    scanf("%c", &Resposta);
    if(Resposta == 's' || Resposta == 'S'){
        printf("\nDigite o nome: \n");
    fgets(c2.nome, 50, stdin);
    printf("Digite a idade: \n");
    scanf("%d", &c2.idade);
    getchar(); // Limpa o buffer do teclado
    printf("Digite a rua: \n");
    fgets(c2.rua, 100, stdin);
    printf("Digite o numero: \n");
    scanf("%d", &c2.numero);
    getchar(); // Limpa o buffer do teclado
    printf("\nCadastro realizado com sucesso!\n");

    printf("\nDados cadastrados:\n");
    printf("Nome: %s", c2.nome);
    printf("Idade: %d\n", c2.idade);
    printf("Rua: %s", c2.rua);
    printf("Numero: %d\n", c2.numero);

    printf("\nObrigado por utilizar o sistema.\n");
    }
    else{
        printf("Encerrando o sistema.\n");
    
    }

    printf("\nObrigado por utilizar o sistema.\n");
    
    return 0;

}