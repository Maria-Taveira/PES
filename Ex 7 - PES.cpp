//EXERC�CIO 7) Algortimo
//Declare num1, num2, num3, num4 NUM�RICO
//Escreva �Digite os tr�s n�meros em ordem crescente:�
//Leia num1; Leia num2; Leia num3
//Escreva �Digite um n�mero (fora da ordem):�
//Leia num4
//Se num4 > num3
//Ent�o escreva �A ordem decrescente �:�, num4, �-�,  num3, �-�, num2, �-�, num1
//Se num4 > num2 E num4 < num3
//Ent�o escreva �A ordem decrescente �:�, num3, �-�,  num4, �-�, num2, �-�, num1
//Se num4 > num1 E num4 < num2
//Ent�o escreva �A ordem decrescente �:�, num3, �-�,  num2, �-�, num4, �-�, num1
//Se num4 < num1
//Ent�o escreva �A ordem decrescente �:�, num3, �-�,  num2, �-�, num1, �-�, num4
//Fim_algoritmo

#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,n4;
	
	cout<<"Informe o primeiro n�mero: ";
	cin>>n1;
	
	cout<<"\nInforme o segundo n�mero: ";
	cin>>n2;
	
	cout<<"\nInforme o terceiro n�mero: ";
	cin>>n3;
	
	cout<<"\nDigite os tr�s n�meros em ordem crescente: ";
	    if ((n1<n2)&&(n2<n3))
		cout<<"A ordem crescente �: "<<n1<<" "<<n2<<" "<<n3;
		else if ((n1<n3) && (n3<n2))
		         cout<<"A ordem crescente �: "<<n1<<" "<<n3<<" "<<n2;
			  else if ((n2<n1) && (n1<n3))
			  		   cout<<"A ordem crescente �: "<<n2<<" "<<n1<<" "<<n3;
				   else if ((n2<n3) && (n3<n1))
				   			cout<<"A ordem crescente �: "<<n2<<" "<<n3<<" "<<n1;
				   		else if((n3<n2) && (n2<n1))
				   				cout<<"A ordem crescente �: "<<n3<<" "<<n2<<" "<<n1;
				   			 else if((n3<n1) && (n1<n2))
				   			 		 cout<<"A ordem crescente �: "<<n3<<" "<<n1<<" "<<n2;
	cout<<"\nEscreva um quarto n�mero: ";
	cin>>n4;
	if(n4>n3)
	   cout<<"A ordem decrescente �: "<<n4<<" "<<n3<<" "<<n2<<" "<<n1;
	else if((n4>n2)&&(n4<n3))
			 cout<<"A ordem decrescente �: "<<n3<<" "<<n4<<" "<<n2<<" "<<n1;
		 else if((n4>n1)&&(n4<n2))
		 		  cout<<"A ordem decrescente �: "<<n3<<" "<<n2<<" "<<n4<<" "<<n1;
			  else if(n4<n1)
			          cout<<"A ordem decrescente �: "<<n3<<" "<<n2<<" "<<n1<<" "<<n4;
					  		 
    return 0;
}
