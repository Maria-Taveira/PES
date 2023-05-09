//2) Tendo como dados de entrada o nome, a altura e o sexo
// de uma pessoa, construa um programa em C 
//que calcule seu peso ideal, utilizando as seguintes fórmulas:
//- Para homens: (72.7*h) - 58
//- Para mulheres: (62.1*h) - 44.7 (h = altura)

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome [20];
	char sexo [1];
	float pesoIdeal,altura;
	
	cout<<"Informe o nome da pessoa: ";
	cin>>nome;
	
	cout<<"\nInforme a altura da pessoa: ";
	cin>>altura;
	
	cout<<"\nInforme o sexo da pessoa,sendo (F/M): ";
	cin>>sexo;
	
	if(strcmp(sexo,"m")==0){
		pesoIdeal=(72.7 * altura) - 58;
		cout<<"O peso ideal masculino é: "<<pesoIdeal<<"Kg\n";	
	}
	 	else{
	 	pesoIdeal=(62.1 * altura ) - 44.7;
	 	cout<<"O peso ideal femino é: "<<pesoIdeal<<"Kg\n";	
		 }
		 
    return 0;
	
}
