//EX10)
//Faça um programa que receba o código correspondente ao cargo de um 
//funcionário e seu salário atual e mostre o cargo, o valor do aumento
// e seu novo salário. Os cargos estão na tabela a seguir.
//tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float codigo,salario;
	
	cout<<"Informe o salário inicial: ";
	cin>>salario;
	
	cout<<"\nInforme o código de 1 à 5: ";
	cin>>codigo;
	if(codigo==1){
	   cout<<"Cargo: Escriturário";
	   cout<<"\nO salario final é: "<<salario + (salario * 0.5);	
	}
	else if(codigo==2){
			cout<<"Cargo: Secretário";
			cout<<"\nO salário final é: "<<salario + (salario * 0.35);
	}
	     else if(codigo==3){
				 cout<<"Cargo: Caixa";
			     cout<<"\nO salário final é: "<<salario + (salario * 0.2);		  
	     }
			  else if(codigo==4){
					  cout<<"Cargo: Gerente";
					  cout<<"\nO salário final é: "<<salario + (salario * 0.1);
			  }
			       else if(codigo==5){
						   cout<<"Cargo: Diretor";
						   cout<<"\nO salário final é: "<<salario;			     
				  }
	return 0;
		
}
