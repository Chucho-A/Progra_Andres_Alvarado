#include <iostream>
#include <conio.h>

using namespace std;

int main(){ 
int chucho, p;
int numeros[chucho];
cout << "De cuantos numertos es su vector? " << endl;
cin >> chucho;
cout << "Ingrese los numeros del vector: " << endl;
for(int i = 0; i < chucho; i++){
	cin >> numeros[i];
}
// Vector Original
  
  cout << "Vector ingresado: " << endl;
 for(int i = 0; i < chucho; i++){
 	cout << numeros[i] << ", ";
 }

// Vector Inverso

cout << endl;
  cout << "Vector Inverso: " << endl;
 for(int j = chucho - 1; j >= 0; j--){
 	cout << numeros[j] << ", ";
 }
getch();
return 0;
}
