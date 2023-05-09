//16) Faça um programa que receba a altura e o peso de uma pessoa. 
//De acordo com a tabela a seguir, verifique e mostre a
// classificação dessa pessoa.
//tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura,peso;
	
	cout<<"Informe a altura da pessoa: ";
	cin>>altura;
	
	cout<<"\nInforme o peso da pessoa:  ";
	cin>>peso;
	
	if(altura<1.20){
	   if(peso<60)
	   cout<<"\nClassificação: A";
	   else if(peso>=60 && peso <90)	
	   	  cout<<"\nClassificação: D";
			else if(peso>90)
					cout<<"Classificação: G";
	}
	else if(altura>=1.20 && altura<1.70){
		    if(peso<60)
		       cout<<"Classificação: B";
		    else if(peso>=60 && peso <90)
			  		cout<<"\nClassificação: E";
			  	 else if(peso>90)
			  	 		cout<<"Classificação: H";
	}
		 else if(altura>1.7){
				if(peso<60)
				   cout<<"Classificação: C";
				else if(peso>=60 && peso<90)
				        cout<<"Classificação: F";
					 else if(peso>90)
					 		cout<<"Classificação: I"; 			
		 }
		 
	return 0;
}
