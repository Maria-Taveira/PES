//3) Fa�a um programa que receba tr�s notas de um aluno, calcule
// e mostre a m�dia aritm�tica e a mensagem constante na
// tabela a seguir. Aos alunos que ficaram para exame, calcule
// e mostre a nota que dever�o tirar para serem aprovados, considerando 
//que a m�dia exigida � 6.0, ou seja, para calcular a nota que o aluno
// ter� que tirar no exame usa-se a f�rmula: notaExame = 12 � m�dia.


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,n3,media,notaExame;
	
	cout<<"Informe a primeira nota: ";
	cin>>n1;
	
	cout<<"Informe a segunda nota: ";
	cin>>n2;
	
	cout<<"Informe a terceira nota: ";
	cin>>n3;
	
	media=(n1 + n2 + n3)/3;
	cout<<"A m�dia �: "<<media;
	
	if(media < 3)
		cout<<"\nALUNO REPROVADO";
		
		else if(media > 6)
				cout<<"\nALUNO APROVADO";
				
				else{
				notaExame=12-media;
				cout<<"\nO aluno est� de exame e precisa de "<<notaExame<<" pontos para passar.";			
				}						
	return 0;
				
}
