//EX9)
//Fa�a um programa que receba quatro valores: I, A, B e C. 
//Desses valores, I � inteiro e positivo, A, B e C s�o reais. 
//Escreva os n�meros A, B e C obedecendo � tabela a seguir. 
//Suponha que o valor digitado para I seja sempre um valor v�lido, 
//ou seja, 1, 2 ou 3, e que os n�meros digitados sejam diferentes um do outro.
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
	
	cout<<"\nInforme o valor de I, sendo de 1 � 3: ";
	cin>>I;
	if(I==1)
       if((A<B)&&(B<C))
	   cout<<"A ordem crescente dos n�meros �: "<<A<<" "<<B<<" "<<C;
	   else if((A<C)&&(C<B))
	   			cout<<"A ordem crescente dos n�meros �: "<<A<<" "<<C<<" "<<B;
	   		else if((B<A)&&(A<C))
	   				cout<<"A ordem crescente �: "<<B<<" "<<A<<" "<<C;
	   			  else if((B<C)&&(C<A))
	   			  			cout<<"A ordem crescente �: "<<B<<" "<<C<<" "<<A;
						else if((C<A)&&(A<B))
								cout<<"A ordem crescente �: "<<C<<" "<<A<<" "<<B;
							 else if((C<B)&& (B<A))	
							 		cout<<"A ordem crescente �: "<<C<<" "<<B<<" "<<A;
	if(I==2)
	   if((A>B)&&(B>C))
	      cout<<"A ordem descrescente �: "<<A<<" "<<B<<" "<<C;
	   else if((A>C)&&(C>B))
	   			cout<<"A ordem descrescente �: "<<A<<" "<<C<<" "<<B;
	   		else if((B>A)&& (A>C))
	   				cout<<"A ordem descrescente �: "<<B<<" "<<A<<" "<<C;
	   			 else if((B>C)&&(C>A))
	   			 		cout<<"A ordem descrescente �: "<<B<<" "<<C<<" "<<A;
	   			 	   else if((C>A)&&(A>B))
	   			 	   	       cout<<"A ordem descrescente �: "<<C<<" "<<A<<" "<<B;
	   			 	   	    else if((C>B)&&(B>A))
	   			 	   	    		cout<<"A ordem descrescente �: "<<C<<" "<<B<<" "<<A;
	if(I==3)
	   if((A>B)&&(A>C))
	   	  cout<<"A ordem �: "<<B<<" "<<A<<" "<<C;
	   else if((B>A)&&(B>C))
	   			cout<<"A ordem �: "<<A<<" "<<B<<" "<<C;
	   		else if((C>A)&& (C>B))
	   				cout<<"A ordem �: "<<A<<" "<<C<<" "<<B;
	
	
	return 0;	
}


