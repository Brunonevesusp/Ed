/*
Nomes: 
Caio Uramoto Evangelista 14777351
Bruno Neves Boa Sorte 14562528
Murillo Domingos De Almeida 14804083
Marcos Paulo Rocha Baltazar 13782373   
Matheus Rodrigues Dos Santos 11212866


Funcionalidade: 
programa para realizar um número Q de consultas em um vetor de tamanho N passado pelo usúario.
*/
#include <stdio.h>



// Função para realizar a busca binária em um vetor ordenado
int buscaBinaria(int vetor[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == alvo)
            return meio; // Elemento encontrado, retorna o índice.

        if (vetor[meio] < alvo)
            inicio = meio + 1; // Descarta a metade esquerda.
        else
            fim = meio - 1; // Descarta a metade direita.
    }
    
    return -1; // Elemento não encontrado.
}

// Função principal
int main() {
    int N, Q;

    // Leitura do tamanho do vetor
    scanf("%d", &N);

    int vetor[N];

    // Leitura dos elementos do vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura do número de consultas
    scanf("%d", &Q);

    // Realização das consultas
    for (int i = 0; i < Q; i++) {
        int consulta;
        scanf("%d", &consulta);
        int resultado = buscaBinaria(vetor, N, consulta);

        // Saída da posição do elemento no vetor ou -1 caso não encontrado
        printf("%d\n", resultado);
    }

    return 0;
}
