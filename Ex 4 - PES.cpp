//4) Fa�a um programa que receba tr�s n�meros 
//e mostre-os em ordem crescente. Suponha que
// o usu�rio digitar� tr�s n�meros diferentes.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3;
	
	cout<<"Informe um n�mero: ";
	cin>>n1;
	
	cout<<"\nInforme um n�mero: ";
	cin>>n2;
	
	cout<<"\nInforme um n�mero: ";
	cin>>n3;
	
	if(n1<n2 && n2<n3){
		cout<<"\nA ordem crescente �: "<<n1<<" "<<n2<<" "<<n3;
	}
		else if (n1<n2 && n2>n3){
				cout<<"\nA ordem crescente �: "<<n1<<" "<<n3<<" "<<n2;		
		}
				else if(n2<n1 && n1<n3){
						cout<<"\nA ordem crescente �: "<<n2<<" "<<n1<<" "<<n3;	
				}						
						else if(n2<n1 && n1>n3){
								cout<<"\nA ordem crescente �: "<<n2<<" "<<n3<<" "<<n1;	
						}								
								else if(n3<n1 && n1<n2){
									cout<<"\nA ordem crescente �: "<<n3<<" "<<n1<<" "<<n2;
								}										
										else{
										    cout<<"\nA ordem crescente �: "<<n3<<" "<<n2<<" "<<n1;
										}
										
													  		           		
	return 0;	
}
