//EX  12) Fa�a um programa que receba o sal�rio inicial de um
//funcion�rio, calcule e mostre o novo sal�rio 
//acrescido de bonifica��o e de aux�lio escola.
//tabelas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario,bonificacao,auxilio;
	
	
	cout<<"Informe o sal�rio inicial: ";
	cin>>salario;
	if(salario<=500){
		bonificacao=salario*0.5;
		cout<<"\nA bonifica��o � de: "<<bonificacao;
		cout<<"\nO sal�rio com a bonifica��o �: "<<salario+bonificacao;
	}
	else if((salario>500)&&(salario<1200)){
		    bonificacao=salario*0.12;
			cout<<"\nA bonifica��o � de: "<<bonificacao;
			cout<<"\nO sal�rio com a bonifica��o �: "<<salario+bonificacao;	
	}
		  else{
			  cout<<"\nN�o h� bonifica��o";
			  cout<<"\nSal�rio com a bonifica��o �: "<<salario;	 	
		  } 
	if(salario<600){
	   auxilio=150;
	   cout<<"\nO aux�lio escola � de: "<<auxilio;	
	}
	 
	else{
		auxilio=100;
	 	cout<<"\nO aux�lio escola � de: "<<auxilio;
		
	}
	cout<<"\nO sal�rio com a bonifica��o e o aux�lio escola � de: "<<salario+bonificacao+auxilio;  
	
	return 0;		
}

