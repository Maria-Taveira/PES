//EX10)
//Fa�a um programa que receba o c�digo correspondente ao cargo de um 
//funcion�rio e seu sal�rio atual e mostre o cargo, o valor do aumento
// e seu novo sal�rio. Os cargos est�o na tabela a seguir.
//tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float codigo,salario;
	
	cout<<"Informe o sal�rio inicial: ";
	cin>>salario;
	
	cout<<"\nInforme o c�digo de 1 � 5: ";
	cin>>codigo;
	if(codigo==1){
	   cout<<"Cargo: Escritur�rio";
	   cout<<"\nO salario final �: "<<salario + (salario * 0.5);	
	}
	else if(codigo==2){
			cout<<"Cargo: Secret�rio";
			cout<<"\nO sal�rio final �: "<<salario + (salario * 0.35);
	}
	     else if(codigo==3){
				 cout<<"Cargo: Caixa";
			     cout<<"\nO sal�rio final �: "<<salario + (salario * 0.2);		  
	     }
			  else if(codigo==4){
					  cout<<"Cargo: Gerente";
					  cout<<"\nO sal�rio final �: "<<salario + (salario * 0.1);
			  }
			       else if(codigo==5){
						   cout<<"Cargo: Diretor";
						   cout<<"\nO sal�rio final �: "<<salario;			     
				  }
	return 0;
		
}
