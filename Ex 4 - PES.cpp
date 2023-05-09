//4) Faça um programa que receba três números 
//e mostre-os em ordem crescente. Suponha que
// o usuário digitará três números diferentes.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3;
	
	cout<<"Informe um número: ";
	cin>>n1;
	
	cout<<"\nInforme um número: ";
	cin>>n2;
	
	cout<<"\nInforme um número: ";
	cin>>n3;
	
	if(n1<n2 && n2<n3){
		cout<<"\nA ordem crescente é: "<<n1<<" "<<n2<<" "<<n3;
	}
		else if (n1<n2 && n2>n3){
				cout<<"\nA ordem crescente é: "<<n1<<" "<<n3<<" "<<n2;		
		}
				else if(n2<n1 && n1<n3){
						cout<<"\nA ordem crescente é: "<<n2<<" "<<n1<<" "<<n3;	
				}						
						else if(n2<n1 && n1>n3){
								cout<<"\nA ordem crescente é: "<<n2<<" "<<n3<<" "<<n1;	
						}								
								else if(n3<n1 && n1<n2){
									cout<<"\nA ordem crescente é: "<<n3<<" "<<n1<<" "<<n2;
								}										
										else{
										    cout<<"\nA ordem crescente é: "<<n3<<" "<<n2<<" "<<n1;
										}
										
													  		           		
	return 0;	
}
