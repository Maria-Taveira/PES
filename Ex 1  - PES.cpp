//1) Faça um programa que receba dois números e mostre o maior.



#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n1,n2;

	cout<<"Informe um número: ";
	cin>>n1;
	
	cout<<"\nInforme um número: ";
	cin>>n2;
	
	if(n1 < n2)
	    cout<<"O maior número é: "<<n2;
	else
		cout<<"O maior número é: "<<n1;	
	   

	return 0;
}
