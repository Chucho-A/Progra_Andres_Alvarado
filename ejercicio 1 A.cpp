#include <iostream>

using namespace std;
int main() {
char frase[80];
cout<<"ingrese una frase ";
cin.getline(frase,80);
int i=0,uwu=0;
char chucho;

while(frase[i]!='\0')
{ 
i++;
	}
	i=i-1;
	while(i>uwu)	{
	chucho=frase[i];
	frase[i]=frase[uwu];
	frase[uwu]=chucho;
i--;
uwu++;}
cout<<"la frase al revez dice "<<frase<<endl;	
	return 0;
}
