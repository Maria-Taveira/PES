//EX11)Faça um programa que apresente o menu a seguir, permita ao usuário 
//escolher a opção desejada, receba os dados necessários para executar a
// operação e mostre o resultado. Verifique a possibilidade de opção 
//inválida e não se preocupe com restrições, como salário negativo.
//	Menu de opções:
//	1. Imposto	2. Novo Salário
//Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor
//do imposto usando as regras a seguir:	
//Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do
// aumento e o valor do novo salário usando as regras a seguir:
//Na opção 2:  depois de calcular o novo salário, mostre a seguinte classificação
//tabelas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float opcao,salario,aumento;
	
	cout<<"Informe o salário do funcionário: ";
	cin>>salario;
	
	cout<<"Informe a opção desejada(1/2/3): ";
	cin>>opcao;
	if(opcao==1){
		if(salario<500)
	   		cout<<"\nO valor do imposto é: "<<salario*0.05;
		else if((salario>=500)&&(salario<=850))
				cout<<"\nO valor do imposto é: "<<salario*0.1;
			 else if(salario>850)
		 			cout<<"\nO valor do imposto é: "<<salario*0.15;	
	}
		
	if(opcao==2){
		if(salario>1500){
			cout<<"\nO valor do aumento é: "<<25;
			cout<<"\nO novo salário será: "<<salario+25;
		}   
		else if((salario>=750)&&(salario<=1500)){
				cout<<"\nO valor do aumento é: "<<50;
				cout<<"\nO novo salário será: "<<salario+50;	
		}
			  else if((salario>=450)&&(salario<750)){
					  cout<<"\nO valor do aumento é: "<<75;
					  cout<<"\nO novo salário será: "<<salario+75;		
			  }
			  		else if(salario<450)
					       	 cout<<"\nO valor do aumento é: "<<100;
							 cout<<"\nO novo salário será: "<<salario+100;	
	}
		
	if(opcao==3){
	   if(salario<=700)
	      cout<<"\nClassificação: Mal remunerado";
	   else
	       cout<<"\nClassificação: Bem remunerado";			
	}
	   	  	 		   
	   
	return 0;
}
