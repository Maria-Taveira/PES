//5) A nota final de um estudante é calculada a partir de três notas atribuídas
// respectivamente, a um trabalho de laboratório, a uma avaliação 
//semestral e a um exame final. A média das três notas mencionadas
// obedece aos pesos a seguir:
// ->>> tabela
//Faça um programa que receba as três notas, calcule 
//e mostre a média ponderada e o conceito que segue a tabela:
// ->>> tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float trabalho,avaliacao,exame,mediap;
	
	cout<<"Informe a nota do trabalho de laboratório: ";
	cin>>trabalho;
	
	cout<<"\nInforme a nota da avaliação semestral: ";
	cin>>avaliacao;
	
	cout<<"\nInforme a nota do exame final: ";
	cin>>exame;
	
	mediap = (trabalho * 0.2) + (avaliacao * 0.3) + (exame * 0.5);
	cout<<"\nA média ponderada é: "<<mediap;
	
	if(mediap >=8)
		cout<<"\nConceito: A";
		else if((mediap >=7) && (mediap < 8))
				cout<<"\nConceito: B";
				else if((mediap >= 6) && (mediap < 7))
						cout<<"\nConceito: C";
						else if((mediap >= 5) && (mediap < 6))
								cout<<"\nConceito: D";
								else
								cout<<"\nConceito: E";
								
	return 0;
}
