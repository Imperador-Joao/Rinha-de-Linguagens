#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    // Registra o tempo inicial
    high_resolution_clock::time_point inicio = high_resolution_clock::now();

    // Seu código a ser medido
    for (int i = 1; i < 1000000+1; i++) {
    }

    // Registra o tempo final
    high_resolution_clock::time_point fim = high_resolution_clock::now();

    // Calcula o tempo decorrido
    duration<double> tempo_decorrido = duration_cast<duration<double>>(fim - inicio);

    std::cout << 1000*tempo_decorrido.count() << std::endl;

    return 0;
}
