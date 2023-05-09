//14) Um supermercado deseja reajustar os preços de seus produtos 
//usando o seguinte critério: o produto poderá ter seu preço aumentado ou 
//diminuído. Para o preço ser alterado, o produto deve preencher pelo menos 
//um dos requisitos a seguir:
//tabela
//Faça um programa que receba o preço atual e a venda media mensal 
//do produto, calculi e mostre o novo preço.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float precoI,media;
	
	cout<<"Informe o preço inicial do produto: ";
	cin>>precoI;
	if(precoI<30)
		cout<<"\nO produto terá um aumento de 10%,seu novo preço será: "<<precoI+(precoI*0.1);
	else if((precoI>=30)&&(precoI<80))
		 	cout<<"\nO produto terá um aumento de 15%,seu novo preço será: "<<precoI+(precoI*0.15);
		  else if(precoI>=80)
		  			cout<<"\nO produto terá uma diminuição de 20%, seu novo preço será: "<<precoI-(precoI*0.2);
		  			
	cout<<"\nInforme o valor da média de vendas mensais:  ";
	cin>>media;
	if(media<500)
		cout<<"\nA média terá um aumento de 10%,seu novo valor será: "<<media+(media*0.1);
	else if((media>=500)&&(media<1200))
			cout<<"\nA média terá um aumento de 15%,seu novo valor será: "<<media+(media*0.15);
		 else if(media>=1200)
		 		cout<<"\nA média terá uma diminuição de 20%, seu novo valor será: "<<media-(media*0.2);
		 		
		 		
	return 0;
	
	}
