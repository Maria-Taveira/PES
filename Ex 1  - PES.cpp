//1) Fa�a um programa que receba dois n�meros e mostre o maior.



#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	int n1,n2;

	cout<<"Informe um n�mero: ";
	cin>>n1;
	
	cout<<"\nInforme um n�mero: ";
	cin>>n2;
	
	if(n1 < n2)
	    cout<<"O maior n�mero �: "<<n2;
	else
		cout<<"O maior n�mero �: "<<n1;	
	   

	return 0;
}
