#include <stdlib.h>
#include <stdio.h>

// Protótipos das funções utilizadas no código
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
    *vet = (int *)malloc(entradas * sizeof(int));
    *inv = (int *)malloc(entradas * sizeof(int));
}

// Função para ler as entradas do vetor
void le(int *vet, int entradas)
{
    for (int i = 0; i < entradas; i++)
    {
        scanf("%d", &vet[i]);
    }
}

// Função para inverter o vetor
void inverte(int *vet, int *inv, int entradas)
{
    for (int i = 0; i < entradas; i++)
    {
        inv[i] = vet[entradas - 1 - i];
    }
}

// Função para imprimir o vetor invertido
void imprime(int *inv, int entradas)
{
    for (int i = 0; i < entradas; i++)
    {
        printf("%d ", inv[i]);
    }
    printf("\n");
}
