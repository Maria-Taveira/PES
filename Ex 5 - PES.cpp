//5) A nota final de um estudante � calculada a partir de tr�s notas atribu�das
// respectivamente, a um trabalho de laborat�rio, a uma avalia��o 
//semestral e a um exame final. A m�dia das tr�s notas mencionadas
// obedece aos pesos a seguir:
// ->>> tabela
//Fa�a um programa que receba as tr�s notas, calcule 
//e mostre a m�dia ponderada e o conceito que segue a tabela:
// ->>> tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float trabalho,avaliacao,exame,mediap;
	
	cout<<"Informe a nota do trabalho de laborat�rio: ";
	cin>>trabalho;
	
	cout<<"\nInforme a nota da avalia��o semestral: ";
	cin>>avaliacao;
	
	cout<<"\nInforme a nota do exame final: ";
	cin>>exame;
	
	mediap = (trabalho * 0.2) + (avaliacao * 0.3) + (exame * 0.5);
	cout<<"\nA m�dia ponderada �: "<<mediap;
	
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
