//13) Faça um programa que receba o valor do salário mínimo, o número de 
//horas trabalhadas, o número de dependentes do funcionário e a quantidade de 
//horas extras trabalhadas. Calcule e mostre o salário a receber do funcionário
// de acordo com as regras:
//	O valor da hora trabalhada é igual a 1/5 do salário mínimo;  ok
//	O salário do mês é igual ao número de horas trabalhadas multiplicado pelo 
//valor da hora trabalhada;
//	Para cada dependente, acrescentar R$ 32,00; 
//	Para cada hora extra trabalhada, calcular o valor da hora trabalhada 
//acrescida de 50%;
//	O salário bruto é igual ao salário do mês mais o valor dos dependents mais
//o valor das horas extras;
//	Calcular o valor do imposto de renda retido na fonte de acordo com a
// tabela a seguir:
	
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario_minimo,horas_trabalhadas,hora_extra,IRRF,gratificacao;
	float valor_horat,salario_mes,salario_bruto,imposto_renda,salario_liquido;
	int dependentes,valor_dependentes;
	
	cout<<"O valor do salário mínimo é: ";
	cin>>salario_minimo;
	
	valor_horat = salario_minimo/5;
	
	cout<<"\nA quantidade de horas trabalhadas é: ";
	cin>>horas_trabalhadas; 
	
	salario_mes= horas_trabalhadas * valor_horat;

	cout<<"\nA quantidade de dependentes do funcionário é: ";
	cin>>dependentes;
	
	valor_dependentes=dependentes*32;
	
	cout<<"\n A quantidade de horas extras trabalhadas é: ";
	cin>>hora_extra;
	
	salario_bruto= salario_mes = valor_dependentes;
	
	salario_bruto= (hora_extra * (valor_horat + (valor_horat*0.5)));
	
	if(salario_bruto<=200){
		IRRF=0;
		cout<<"IRRF: "<<IRRF;
	}
	else if(salario_bruto >200 && salario_bruto <= 500){
		    IRRF=salario_bruto*0.1;
			cout<<"IRPF: "<<IRRF;
			}		
		 else{
				IRRF=salario_bruto*0.2;
				cout<<"IRPF: "<<IRRF;		
		  }	
	
	
	if(salario_bruto<350){
		gratificacao=100;
		cout<<"\nA gratificação será de: "<<gratificacao;
	}
	else{
		gratificacao=50;
		cout<<"\nA gratificação será de: "<<gratificacao;
	}
			
	salario_liquido=salario_bruto - IRRF + gratificacao;
	
	cout<<"O salário líquido é: "<<salario_liquido;
	
	return 0; 	
}
