#include <stdio.h>
#include <time.h>

// Função para resolver a Torre de Hanói
void torreDeHanoi(int n, char hasteOrigem, char hasteAuxiliar, char hasteDestino) {
    if (n == 1) {
        printf("Mova o disco 1 da haste %c para a haste %c\n", hasteOrigem, hasteDestino);
        return;
    }

    // Mova n-1 discos da haste de origem para a haste auxiliar usando a haste de destino como auxiliar
    torreDeHanoi(n - 1, hasteOrigem, hasteDestino, hasteAuxiliar);

    // Mova o disco n da haste de origem para a haste de destino
    printf("Mova o disco %d da haste %c para a haste %c\n", n, hasteOrigem, hasteDestino);

    // Mova n-1 discos da haste auxiliar para a haste de destino usando a haste de origem como auxiliar
    torreDeHanoi(n - 1, hasteAuxiliar, hasteOrigem, hasteDestino);
}

int main() {
    int numDiscos;

    printf("Digite o número de discos: ");
    scanf("%d", &numDiscos);

    clock_t inicio, fim;
    double tempo_execucao;

    inicio = clock();

    printf("Passos para resolver a Torre de Hanói com %d discos:\n", numDiscos);
    torreDeHanoi(numDiscos, 'A', 'B', 'C');

    fim = clock();

    tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %lf segundos\n", tempo_execucao);

    return 0;
}
