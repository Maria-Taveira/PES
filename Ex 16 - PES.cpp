//16) Fa�a um programa que receba a altura e o peso de uma pessoa. 
//De acordo com a tabela a seguir, verifique e mostre a
// classifica��o dessa pessoa.
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
	   cout<<"\nClassifica��o: A";
	   else if(peso>=60 && peso <90)	
	   	  cout<<"\nClassifica��o: D";
			else if(peso>90)
					cout<<"Classifica��o: G";
	}
	else if(altura>=1.20 && altura<1.70){
		    if(peso<60)
		       cout<<"Classifica��o: B";
		    else if(peso>=60 && peso <90)
			  		cout<<"\nClassifica��o: E";
			  	 else if(peso>90)
			  	 		cout<<"Classifica��o: H";
	}
		 else if(altura>1.7){
				if(peso<60)
				   cout<<"Classifica��o: C";
				else if(peso>=60 && peso<90)
				        cout<<"Classifica��o: F";
					 else if(peso>90)
					 		cout<<"Classifica��o: I"; 			
		 }
		 
	return 0;
}
