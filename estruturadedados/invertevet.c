/*
Nomes: 
Caio Uramoto Evangelista 14777351
Bruno Neves Boa Sorte 14562528
Murillo Domingos De Almeida 14804083
Marcos Paulo Rocha Baltazar 13782373   
Matheus Rodrigues Dos Santos 11212866


Funcionalidade:
Nesse programa recebemos como entrada um vetor de n elementos e imprimimos o seu inverso.
*/


#include <stdlib.h>
#include <stdio.h>

// protótipos das funções utilizadas no código
void aloca(int **vet, int **inv, int entradas);
void le(int *vet, int entradas);
void inverte(int *vet, int *inv, int entradas);
void imprime(int *inv, int entradas);


// Programa principal
int main(void)
{
    int entradas, *vet, *inv;

    scanf("%d", &entradas);

    aloca(&vet, &inv, entradas);
    le(vet, entradas);
    inverte(vet, inv, entradas);
    imprime(inv, entradas);

    free(vet);
    free(inv);

    return 0;
}


// Função para alocar memória dinamicamente
void aloca(int **vet, int **inv, int entradas)
{
    vet = (int)malloc(entradas * sizeof(int));
    inv = (int)malloc(entradas * sizeof(int));
}


// função para ler as entradas do vetor
void le(int *vet, int entradas)
{
    for (int i = 0; i < entradas; i++)
    {
        scanf("%d", &vet[i]);
    }
}


// função para inverter o vetor
void inverte(int *vet, int *inv, int entradas)
{
    for (int i = 0; i < entradas; i++)
    {
        inv[i] = vet[entradas - 1 - i];
    }
}


// função para imprimir o vetor invertido
void imprime(int *inv, int entradas)
{
    for (int i = 0; i < entradas; i++)
    {
        printf("%d ", inv[i]);
    }
    printf("\n");
}