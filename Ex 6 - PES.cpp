//6)Fa�a um programa que receba tr�s n�meros obrigatoriamente
// em ordem crescente e um quarto n�mero que n�o siga essa regra.
// Mostre, em seguida, os quatro n�meros em ordem decrescente. 
//Suponha que o usu�rio digitar� quatro n�meros diferentes.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3,n4;
	int inf;
	float N1,N2,N3,N4;
	
	cout<<"Informe o primeiro n�mero: ";
	cin>>n1;
	
	cout<<"\nInforme o segundo n�mero: ";
	cin>>n2;
	
	cout<<"\nInforme o terceiro n�mero: ";
	cin>>n3;
	
	cout<<"\nInforme o quarto n�mero: ";
	cin>>n4;
	
	if ((n1<n2)&&(n2<n3))
		cout<<"A ordem crescente �: "<<n1<<" "<<n2<<" "<<n3<<" "<<n4;
		else if ((n1<n3) && (n3<n2))
		         cout<<"A ordem crescente �: "<<n1<<" "<<n3<<" "<<n2<<" "<<n4;
			  else if ((n2<n1) && (n1<n3))
			  		   cout<<"A ordem crescente �: "<<n2<<" "<<n1<<" "<<n3<<" "<<n4;
				   else if ((n2<n3) && (n3<n1))
				   			cout<<"A ordem crescente �: "<<n2<<" "<<n3<<" "<<n1<<" "<<n4;
				   		else if((n3<n2) && (n2<n1))
				   				cout<<"A ordem crescente �: "<<n3<<" "<<n2<<" "<<n1<<" "<<n4;
				   			 else if((n3<n1) && (n1<n2))
				   			 		 cout<<"A ordem crescente �: "<<n3<<" "<<n1<<" "<<n2<<" "<<n4;
				   			 		 
	
	cout<<"\nAgora o usu�rio ir� digitar mais 4 novos n�meros. "<<inf;
	
	cout<<"\nInforme o primeiro n�mero: ";
	cin>>N1;
	
	cout<<"\nInforme o segundo n�mero: ";
	cin>>N2;
	
	cout<<"\nInforme o terceiro n�mero: ";
	cin>>N3;
	
	cout<<"Informe o quarto n�mero: ";
	cin>>N4;
	
	if((N1>N2) && (N2>N3))
	   cout<<"A ordem decrescente �: "<<N1<<" "<<N2<<"  "<<N3<<" "<<N4;
	else if ((N1>N3) && (N3>N2))
			 cout<<"A ordem descrescente �: "<<N1<<" "<<N3<<" "<<N2<<" "<<N4;
		 else if ((N2>N1) && (N1>N3))
		 		  cout<<"A ordem decrescente �: "<<N2<<" "<<N1<<" "<<N3<<" "<<N4;
		 	  else if((N2>N3)  && (N3>N1))
		 	  		  cout<<"A ordem descrescente �: "<<N2<<" "<<N3<<" "<<N1<<" "<<N4;
		 	  	   else if ((N3>N1) && (N1>N2))
		 	  	            cout<<"A ordem descrescente �: "<<N3<<" "<<N1<<" "<<N2<<" "<<N4;
		 	  	        else if((N3>N2) && (N2>N1))
		 	  	                cout<<"A ordem descrecente �: "<<N3<<" "<<N2<<" "<<N1<<" "<<N4;
		 	  	                
	return 0;	 	  	                	
}
