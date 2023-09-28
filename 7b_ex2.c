/*
Desenvolva um programa para gerenciar nomes de livros, que serao gravados e lidos no arquivo livros.txt.
*/

#include <stdio.h>
#include "bibliotecaC.h"
#define TAM_MAX 100

int main()
{
    // declaracao e abertura do arquivo
    FILE *arquivo;
    arquivo = fopen("livros.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }
    // declaracao variaveis para fazer os inputs
    char inputLivro[TAM_MAX];
    int status = 1;
    char c; // variavel descartavel para fgets funcionar corretamente
    // input de titulos
    do
    {
        printf("Informe o titulo do livro a ser salvo: ");
        fgets(inputLivro, TAM_MAX, stdin);
        fprintf(arquivo, "%s", inputLivro);
        printf("Deseja incluir mais um titulo?\n1 para continuar, 0 para sair: ");
        scanf("%d", &status);
        scanf("%c", &c); // scanf le um char para que o enter não seja lido pela proxima iteracao de fgets
    } while (status != 0);
    fclose(arquivo);
    manterTerminalAberto();
    return 0;
}