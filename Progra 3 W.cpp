#include <iostream>

const int x = 5;
const int y = 5;

int main() {
    int matriz[x][y];


    std::cout << "ingrese los elementos de la matriz de 5x5" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cin >> matriz[i][j];
        }
    }

    int sumaMaxima = 0;
    int filaMaxima = -1;
    for (int i = 0; i < x; i++) {
        int sumaFila = 0;
        for (int j = 0; j < y; j++) {
            sumaFila += matriz[i][j];
        }
        if (sumaFila > sumaMaxima) {
            sumaMaxima = sumaFila;
            filaMaxima = i;
        }
    }
    std::cout << "La fila con la maxima suma es la fila " << filaMaxima + 1
              << " con una suma de " << sumaMaxima << std::endl;

}
