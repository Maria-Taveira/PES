//15) Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos
// dos lados de um triângulo e, se forem, verifique se é um triângulo equilátero,
// isósceles ou escaleno. Se eles não formarem um triângulo, escreva uma mensagem.
//Considere que:
//	O comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
//	Chama-se equilátero o triângulo que tem três lados iguais;
//	Denomina-se isosceles o triângulo que tem o comprimento de dois lados iguais;
//	Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
//
//	O sinal de diferente em C é !=

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
			cout<<"\nO triângulo é equilátero.";	
		}
		else if(X==Y || X==Z || Y==Z){
				cout<<"\nO triângulo é isósceles.";
		}
			 else 
			 	 cout<<"\nO triângulo é escaleno.";
	}
	return 0;
	
}
