//EX8)Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	cout<<"Informe um número: ";
	cin>>n;
		if(n % 2==0)
	  	   cout<<"Este número é par.";
		else
	       cout<<"Este número é ímpar.";
	       
	return 0;
}
