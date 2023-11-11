#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No 
{
    char dados[5]; // Para armazenar até 4 dígitos e o caractere nulo '\0'
    struct No* proximo;
};

struct No* criaNo(char dados[5]) 
{
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));

    if (!novoNo) 
        exit(1);

    strcpy(novoNo->dados, dados);
    novoNo->proximo = NULL;

    return novoNo;
}

void insereInicio(struct No** cabeca, char dados[5]) 
{
    struct No* novoNo = criaNo(dados);

    novoNo->proximo = *cabeca;
    *cabeca = novoNo;
}

void imprimirLista(struct No* cabeca) 
{
    struct No* atual = cabeca;

    while (atual) 
    {
        printf("%s ", atual->dados);
        atual = atual->proximo;
    }
    printf("\n");
}

int main(void) 
{
    char numeroGrande[17]; // Para armazenar até 16 dígitos (e o caractere nulo '\0')
    printf("Digite um número grande: ");
    scanf("%s", numeroGrande);

    int tamanho = strlen(numeroGrande);
    int i;

    struct No* cabeca = NULL;

    // Divide o número em grupos de 4 dígitos e cria nós para cada grupo
    for (i = tamanho - 4; i >= 0; i -= 4) 
    {
        char grupo[5];
        strncpy(grupo, numeroGrande + i, 4);
        grupo[4] = '\0';
        insereInicio(&cabeca, grupo);
    }

    // Se houver dígitos restantes, cria um último nó
    if (i < 0) 
    {
        char grupo[5];
        strncpy(grupo, numeroGrande, i + 4);
        grupo[i + 4] = '\0';
        insereInicio(&cabeca, grupo);
    }

    imprimirLista(cabeca);

    return 0;
}