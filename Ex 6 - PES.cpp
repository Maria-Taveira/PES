//6)Faça um programa que receba três números obrigatoriamente
// em ordem crescente e um quarto número que não siga essa regra.
// Mostre, em seguida, os quatro números em ordem decrescente. 
//Suponha que o usuário digitará quatro números diferentes.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3,n4;
	int inf;
	float N1,N2,N3,N4;
	
	cout<<"Informe o primeiro número: ";
	cin>>n1;
	
	cout<<"\nInforme o segundo número: ";
	cin>>n2;
	
	cout<<"\nInforme o terceiro número: ";
	cin>>n3;
	
	cout<<"\nInforme o quarto número: ";
	cin>>n4;
	
	if ((n1<n2)&&(n2<n3))
		cout<<"A ordem crescente é: "<<n1<<" "<<n2<<" "<<n3<<" "<<n4;
		else if ((n1<n3) && (n3<n2))
		         cout<<"A ordem crescente é: "<<n1<<" "<<n3<<" "<<n2<<" "<<n4;
			  else if ((n2<n1) && (n1<n3))
			  		   cout<<"A ordem crescente é: "<<n2<<" "<<n1<<" "<<n3<<" "<<n4;
				   else if ((n2<n3) && (n3<n1))
				   			cout<<"A ordem crescente é: "<<n2<<" "<<n3<<" "<<n1<<" "<<n4;
				   		else if((n3<n2) && (n2<n1))
				   				cout<<"A ordem crescente é: "<<n3<<" "<<n2<<" "<<n1<<" "<<n4;
				   			 else if((n3<n1) && (n1<n2))
				   			 		 cout<<"A ordem crescente é: "<<n3<<" "<<n1<<" "<<n2<<" "<<n4;
				   			 		 
	
	cout<<"\nAgora o usuário irá digitar mais 4 novos números. "<<inf;
	
	cout<<"\nInforme o primeiro número: ";
	cin>>N1;
	
	cout<<"\nInforme o segundo número: ";
	cin>>N2;
	
	cout<<"\nInforme o terceiro número: ";
	cin>>N3;
	
	cout<<"Informe o quarto número: ";
	cin>>N4;
	
	if((N1>N2) && (N2>N3))
	   cout<<"A ordem decrescente é: "<<N1<<" "<<N2<<"  "<<N3<<" "<<N4;
	else if ((N1>N3) && (N3>N2))
			 cout<<"A ordem descrescente é: "<<N1<<" "<<N3<<" "<<N2<<" "<<N4;
		 else if ((N2>N1) && (N1>N3))
		 		  cout<<"A ordem decrescente é: "<<N2<<" "<<N1<<" "<<N3<<" "<<N4;
		 	  else if((N2>N3)  && (N3>N1))
		 	  		  cout<<"A ordem descrescente é: "<<N2<<" "<<N3<<" "<<N1<<" "<<N4;
		 	  	   else if ((N3>N1) && (N1>N2))
		 	  	            cout<<"A ordem descrescente é: "<<N3<<" "<<N1<<" "<<N2<<" "<<N4;
		 	  	        else if((N3>N2) && (N2>N1))
		 	  	                cout<<"A ordem descrecente é: "<<N3<<" "<<N2<<" "<<N1<<" "<<N4;
		 	  	                
	return 0;	 	  	                	
}
