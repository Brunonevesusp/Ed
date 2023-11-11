/*
Nomes: 
Caio Uramoto Evangelista 14777351
Bruno Neves Boa Sorte 14562528
Murillo Domingos De Almeida 14804083
Marcos Paulo Rocha Baltazar 13782373   
Matheus Rodrigues Dos Santos 11212866


*/


#include <stdio.h>
#include <stdlib.h>


// função para realizar a busca binária
int buscaBinaria(int vet[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vet[meio] == alvo)
            return meio; // Elemento encontrado, retorna o índice.

        if (vet[meio] < alvo)
            inicio = meio + 1; // Descarta a metade esquerda.
        else
            fim = meio - 1; // Descarta a metade direita.
    }
    
    return -1; // Elemento não encontrado.
}

// função principal
int main() {
    int tamanho;
    
    scanf("%d", &tamanho);

    int *vet = (int *)malloc(tamanho * sizeof(int));
    if (vet == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }


    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet[i]);
    }

    int alvo;
    scanf("%d", &alvo);

    int resultado = buscaBinaria(vet, tamanho, alvo);

    if (resultado != -1)
        printf("%d", alvo);
    else
        printf("%d", resultado);

    free(vet); // Libera a memória alocada dinamicamente.
    return 0;
}
