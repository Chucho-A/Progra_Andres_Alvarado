#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int chucho=35;
int main() {
    char nombre[chucho];
cout << "Ingrese una frase de 35 caracteres o menos" << endl;
cout << endl;
    
cin.getline(nombre, chucho, '\n');
int longitud = strlen(nombre);
int AEIOU = 0;
cout<< endl;
cout<<endl;

for (int i = 0; i < longitud; i++) {
    char caracter = tolower(nombre[i]);
if (caracter =='a'|| caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
AEIOU++; }}

cout<< "Vocales totales en la frase: " << AEIOU << endl;
cout<< endl;
cout<<endl;
int A = 0, E = 0, I = 0, O = 0, U = 0;

for (int y = 0; y < longitud; y++) {
char vocal = tolower(nombre[y]);
switch (vocal) {
case 'a':
A++;
break;
case 'e':
E++;
    break;
case 'i':
    I++;
    break;
case 'o':
    O++;
    break;
case 'u':
    U++;
    break;
    default:
    break;
        }
    }

    cout<< "Numero de vocal a: " << A << endl;
    cout<< "Numero de vocal e: " << E << endl;
    cout<< "Numero de vocal i: " << I << endl;
    cout<< "Numero de vocal o: " << O << endl;
    cout<< "Numero de vocal u: " << U << endl;

}
