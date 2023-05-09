//EX11)Fa�a um programa que apresente o menu a seguir, permita ao usu�rio 
//escolher a op��o desejada, receba os dados necess�rios para executar a
// opera��o e mostre o resultado. Verifique a possibilidade de op��o 
//inv�lida e n�o se preocupe com restri��es, como sal�rio negativo.
//	Menu de op��es:
//	1. Imposto	2. Novo Sal�rio
//Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o valor
//do imposto usando as regras a seguir:	
//Na op��o 2: receber o sal�rio de um funcion�rio, calcular e mostrar o valor do
// aumento e o valor do novo sal�rio usando as regras a seguir:
//Na op��o 2:  depois de calcular o novo sal�rio, mostre a seguinte classifica��o
//tabelas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float opcao,salario,aumento;
	
	cout<<"Informe o sal�rio do funcion�rio: ";
	cin>>salario;
	
	cout<<"Informe a op��o desejada(1/2/3): ";
	cin>>opcao;
	if(opcao==1){
		if(salario<500)
	   		cout<<"\nO valor do imposto �: "<<salario*0.05;
		else if((salario>=500)&&(salario<=850))
				cout<<"\nO valor do imposto �: "<<salario*0.1;
			 else if(salario>850)
		 			cout<<"\nO valor do imposto �: "<<salario*0.15;	
	}
		
	if(opcao==2){
		if(salario>1500){
			cout<<"\nO valor do aumento �: "<<25;
			cout<<"\nO novo sal�rio ser�: "<<salario+25;
		}   
		else if((salario>=750)&&(salario<=1500)){
				cout<<"\nO valor do aumento �: "<<50;
				cout<<"\nO novo sal�rio ser�: "<<salario+50;	
		}
			  else if((salario>=450)&&(salario<750)){
					  cout<<"\nO valor do aumento �: "<<75;
					  cout<<"\nO novo sal�rio ser�: "<<salario+75;		
			  }
			  		else if(salario<450)
					       	 cout<<"\nO valor do aumento �: "<<100;
							 cout<<"\nO novo sal�rio ser�: "<<salario+100;	
	}
		
	if(opcao==3){
	   if(salario<=700)
	      cout<<"\nClassifica��o: Mal remunerado";
	   else
	       cout<<"\nClassifica��o: Bem remunerado";			
	}
	   	  	 		   
	   
	return 0;
}
