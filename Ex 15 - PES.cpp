//15) Dados tr�s valores X, Y e Z, verifique se eles podem ser os comprimentos
// dos lados de um tri�ngulo e, se forem, verifique se � um tri�ngulo equil�tero,
// is�sceles ou escaleno. Se eles n�o formarem um tri�ngulo, escreva uma mensagem.
//Considere que:
//	O comprimento de cada lado de um tri�ngulo � menor que a soma dos outros dois lados;
//	Chama-se equil�tero o tri�ngulo que tem tr�s lados iguais;
//	Denomina-se isosceles o tri�ngulo que tem o comprimento de dois lados iguais;
//	Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes.
//
//	O sinal de diferente em C � !=

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float X,Y,Z;
	
	cout<<"Informe o valor de X: ";
	cin>>X;
	
	cout<<"\nInforme o valor de Y: ";
	cin>>Y;
	
	cout<<"\nInforme o valor de Z: ";
	cin>>Z;
	
	if(X<Y + Z && Y<X + Z && Z<X + Y){
		if(X==Y && Y==Z){
			cout<<"\nO tri�ngulo � equil�tero.";	
		}
		else if(X==Y || X==Z || Y==Z){
				cout<<"\nO tri�ngulo � is�sceles.";
		}
			 else 
			 	 cout<<"\nO tri�ngulo � escaleno.";
	}
	return 0;
	
}
