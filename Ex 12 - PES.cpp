//EX  12) Faça um programa que receba o salário inicial de um
//funcionário, calcule e mostre o novo salário 
//acrescido de bonificação e de auxílio escola.
//tabelas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario,bonificacao,auxilio;
	
	
	cout<<"Informe o salário inicial: ";
	cin>>salario;
	if(salario<=500){
		bonificacao=salario*0.5;
		cout<<"\nA bonificação é de: "<<bonificacao;
		cout<<"\nO salário com a bonificação é: "<<salario+bonificacao;
	}
	else if((salario>500)&&(salario<1200)){
		    bonificacao=salario*0.12;
			cout<<"\nA bonificação é de: "<<bonificacao;
			cout<<"\nO salário com a bonificação é: "<<salario+bonificacao;	
	}
		  else{
			  cout<<"\nNão há bonificação";
			  cout<<"\nSalário com a bonificação é: "<<salario;	 	
		  } 
	if(salario<600){
	   auxilio=150;
	   cout<<"\nO auxílio escola é de: "<<auxilio;	
	}
	 
	else{
		auxilio=100;
	 	cout<<"\nO auxílio escola é de: "<<auxilio;
		
	}
	cout<<"\nO salário com a bonificação e o auxílio escola é de: "<<salario+bonificacao+auxilio;  
	
	return 0;		
}

