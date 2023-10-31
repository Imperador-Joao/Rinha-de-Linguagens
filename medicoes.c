#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio, fim;
    double tempo_decorrido;

    // Registra o tempo inicial
    inicio = clock();
    // Seu código a ser medido
    for (int i = 1; i < 1000000+1; i++) {
    }

    // Registra o tempo final
    fim = clock();

    // Calcula o tempo decorrido
    tempo_decorrido = (double) 1000*(fim - inicio) / CLOCKS_PER_SEC;

    printf("%f\n", tempo_decorrido);

    return 0;
}
