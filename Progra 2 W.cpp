#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros;

    std::cout << " escribir 15 numeros" << std::endl;
    for (int i = 0; i < 15; i++) {
        int numero;
        std::cin >> numero;
        numeros.push_back(numero);
    }

    std::sort(numeros.begin(), numeros.end(), std::greater<int>());

    std::cout << "De mas a menos" << std::endl;
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::sort(numeros.begin(), numeros.end());

    std::cout << "De menos a mas" << std::endl;
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

}
