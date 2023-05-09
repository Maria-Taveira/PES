//EX9)
//Faça um programa que receba quatro valores: I, A, B e C. 
//Desses valores, I é inteiro e positivo, A, B e C são reais. 
//Escreva os números A, B e C obedecendo à tabela a seguir. 
//Suponha que o valor digitado para I seja sempre um valor válido, 
//ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.
//tabela...


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float A,B,C;
	int I;
	
	cout<<"Informe o valor de A: ";
	cin>>A;
	 
	cout<<"\nInforme o valor de B: ";
	cin>>B;
	
	cout<<"\nInforme o valor de C: ";
	cin>>C;
	
	cout<<"\nInforme o valor de I, sendo de 1 à 3: ";
	cin>>I;
	if(I==1)
       if((A<B)&&(B<C))
	   cout<<"A ordem crescente dos números é: "<<A<<" "<<B<<" "<<C;
	   else if((A<C)&&(C<B))
	   			cout<<"A ordem crescente dos números é: "<<A<<" "<<C<<" "<<B;
	   		else if((B<A)&&(A<C))
	   				cout<<"A ordem crescente é: "<<B<<" "<<A<<" "<<C;
	   			  else if((B<C)&&(C<A))
	   			  			cout<<"A ordem crescente é: "<<B<<" "<<C<<" "<<A;
						else if((C<A)&&(A<B))
								cout<<"A ordem crescente é: "<<C<<" "<<A<<" "<<B;
							 else if((C<B)&& (B<A))	
							 		cout<<"A ordem crescente é: "<<C<<" "<<B<<" "<<A;
	if(I==2)
	   if((A>B)&&(B>C))
	      cout<<"A ordem descrescente é: "<<A<<" "<<B<<" "<<C;
	   else if((A>C)&&(C>B))
	   			cout<<"A ordem descrescente é: "<<A<<" "<<C<<" "<<B;
	   		else if((B>A)&& (A>C))
	   				cout<<"A ordem descrescente é: "<<B<<" "<<A<<" "<<C;
	   			 else if((B>C)&&(C>A))
	   			 		cout<<"A ordem descrescente é: "<<B<<" "<<C<<" "<<A;
	   			 	   else if((C>A)&&(A>B))
	   			 	   	       cout<<"A ordem descrescente é: "<<C<<" "<<A<<" "<<B;
	   			 	   	    else if((C>B)&&(B>A))
	   			 	   	    		cout<<"A ordem descrescente é: "<<C<<" "<<B<<" "<<A;
	if(I==3)
	   if((A>B)&&(A>C))
	   	  cout<<"A ordem é: "<<B<<" "<<A<<" "<<C;
	   else if((B>A)&&(B>C))
	   			cout<<"A ordem é: "<<A<<" "<<B<<" "<<C;
	   		else if((C>A)&& (C>B))
	   				cout<<"A ordem é: "<<A<<" "<<C<<" "<<B;
	
	
	return 0;	
}


