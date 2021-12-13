#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {
    std::vector<std::string> v;
    // Processa argc/argv colocando
    // argumentos do programa em v.
    // DICA: Use a função
    // membro push_back() por exemplo.

    // Ordena vector
    std::sort(v.begin(), v.end());

    // Imprime argumentos ordenados para std::cout
    // DICA: pode usar ciclo for-each

    return 0;
}