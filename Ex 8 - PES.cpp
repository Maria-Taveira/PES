//EX8)Fa�a um programa que receba um n�mero inteiro e verifique se � par ou �mpar.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	cout<<"Informe um n�mero: ";
	cin>>n;
		if(n % 2==0)
	  	   cout<<"Este n�mero � par.";
		else
	       cout<<"Este n�mero � �mpar.";
	       
	return 0;
}
