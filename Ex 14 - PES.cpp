//14) Um supermercado deseja reajustar os pre�os de seus produtos 
//usando o seguinte crit�rio: o produto poder� ter seu pre�o aumentado ou 
//diminu�do. Para o pre�o ser alterado, o produto deve preencher pelo menos 
//um dos requisitos a seguir:
//tabela
//Fa�a um programa que receba o pre�o atual e a venda media mensal 
//do produto, calculi e mostre o novo pre�o.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float precoI,media;
	
	cout<<"Informe o pre�o inicial do produto: ";
	cin>>precoI;
	if(precoI<30)
		cout<<"\nO produto ter� um aumento de 10%,seu novo pre�o ser�: "<<precoI+(precoI*0.1);
	else if((precoI>=30)&&(precoI<80))
		 	cout<<"\nO produto ter� um aumento de 15%,seu novo pre�o ser�: "<<precoI+(precoI*0.15);
		  else if(precoI>=80)
		  			cout<<"\nO produto ter� uma diminui��o de 20%, seu novo pre�o ser�: "<<precoI-(precoI*0.2);
		  			
	cout<<"\nInforme o valor da m�dia de vendas mensais:  ";
	cin>>media;
	if(media<500)
		cout<<"\nA m�dia ter� um aumento de 10%,seu novo valor ser�: "<<media+(media*0.1);
	else if((media>=500)&&(media<1200))
			cout<<"\nA m�dia ter� um aumento de 15%,seu novo valor ser�: "<<media+(media*0.15);
		 else if(media>=1200)
		 		cout<<"\nA m�dia ter� uma diminui��o de 20%, seu novo valor ser�: "<<media-(media*0.2);
		 		
		 		
	return 0;
	
	}
