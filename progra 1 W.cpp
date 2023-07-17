#include <iostream>
#include <string>

bool esPalindromo(const std::string &cadena) {
    int i = 0;
    int j = cadena.length() - 1;

    while (i < j) {
        if (cadena[i] != cadena[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    std::string cadena;

    std::cout << "Ingrese un texto ";
    std::getline(std::cin, cadena);

    if (esPalindromo(cadena)) {
        std::cout << "El texto es palindromo" << std::endl;
    } else {
        std::cout << "el texto no es palindromo" << std::endl;
    }

    return 0;
}
