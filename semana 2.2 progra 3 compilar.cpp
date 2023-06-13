#include <iostream>
using namespace std;
int main(){
int columna=4;
int fila=4;
int matriz[4][4];
int sumaFilas[4];
int sumaColumnas[4];

for(int i=0;i<4;i++)
{
for(int p=0;p<4;p++){
cout<<" Ingrese el valor de la fila" <<i+1<<" Ingrese el valor de la columna "<<p+1<<",";
cin >> matriz[i][p];
}}

for(int i=0;i<4;i++){
int suma=0;
for(int p=0;p<4;p++){
suma += matriz[p][i];
}
sumaColumnas[i] = suma;
}

for(int i=0;i<4;i++){
cout<<"La suma de la fila "<<i+1<<" es "<<sumaFilas[i]<<endl;
cout<<"La suma de la columna es de "<<i+1<<"  "<<sumaColumnas[i]<<endl;
}
	return 0;
}

