// 20)Faça um programa que receba a medida de um ângulo em graus. 
//Calcule e mostre o quadrante em que se localiza esse ângulo. 
//Considere os quadrantes da trigonometria. Considerar graus de 1 a 360.

#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	float angulo;
	
	cout<<"Informe o ângulo em graus(1 à 360): ";
	cin>>angulo;
	if((angulo>=0)&&(angulo<=90)
		cout<<"O ângulo esta no primeiro quadrante.";
	else if((angulo>90)&&(angulo<=180))
			cout<<"O ângulo esta no seundo quadrante.";
		 else if ((angulo>180)&&(angulo<=270))
		 			cout<<"O ângulo esta no terceiro quadrante.";
		 	  else if((angulo>270)&&(angulo<=360))
		 	           cout<<"O ângulo esta no quarto quadrante.";

	return 0;

}
