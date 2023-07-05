#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    int seleccion;
    int clases = 0;
    int notas[100];
    float promedio = 0.0;

    do {
        cout << "MENU" << endl;
        cout << "(1) Nombre y apellido del estudiante" << endl;
        cout << "(2) Asignar las notas segun su curso" << endl;
        cout << "(3) Ver las notas asignadas" << endl;
        cout << "(4) Promedio de las notas" << endl;
        cout << "(5) Salir" << endl;

        cin >> seleccion;

        switch (seleccion) {
            case 1:
                cout << "Nombre y apellido del estudiante ";
                cin.ignore();
                getline(cin, nombre);
                break;

            case 2:
                cout << "Cuantos cursos lleva: ";
                cin >> clases;

                for (int i = 0; i < clases; i++) {
                    cout << "Clase " << i + 1 << ": ";
                    cin >> notas[i];
                }
                break;

            case 3:
                cout << "Observar notas ingresadas" << endl;
                
                for (int i = 0; i < clases; i++) {
                    cout << "Clase " << i + 1 << ": " << notas[i] << endl;
                }
                break;

            case 4:
                if (nombre.empty()) {
                    cout << "No se ha ingresado el nombre del estudiante" << endl;
                } else if (clases == 0) {
                    cout << "No se ha ingresado la clase" << endl;
                } else {
                    cout << "Observar el promedio de las notas ingresadas" << endl;
                    promedio = 0.0;

                    for (int i = 0; i < clases; i++) {
                        promedio += notas[i];
                    }

                    promedio /= clases;
                    cout << "Alumno: " << nombre << endl;
                    cout << "Promedio: " << fixed << promedio << endl;
                }
                break;

            default:
                cout << "Gracias por utilizar el menu de chucho" << endl;
                break;
        }
    } while (seleccion != 5);}
