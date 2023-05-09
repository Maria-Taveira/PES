//13) Fa�a um programa que receba o valor do sal�rio m�nimo, o n�mero de 
//horas trabalhadas, o n�mero de dependentes do funcion�rio e a quantidade de 
//horas extras trabalhadas. Calcule e mostre o sal�rio a receber do funcion�rio
// de acordo com as regras:
//	O valor da hora trabalhada � igual a 1/5 do sal�rio m�nimo;  ok
//	O sal�rio do m�s � igual ao n�mero de horas trabalhadas multiplicado pelo 
//valor da hora trabalhada;
//	Para cada dependente, acrescentar R$ 32,00; 
//	Para cada hora extra trabalhada, calcular o valor da hora trabalhada 
//acrescida de 50%;
//	O sal�rio bruto � igual ao sal�rio do m�s mais o valor dos dependents mais
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
	
	cout<<"O valor do sal�rio m�nimo �: ";
	cin>>salario_minimo;
	
	valor_horat = salario_minimo/5;
	
	cout<<"\nA quantidade de horas trabalhadas �: ";
	cin>>horas_trabalhadas; 
	
	salario_mes= horas_trabalhadas * valor_horat;

	cout<<"\nA quantidade de dependentes do funcion�rio �: ";
	cin>>dependentes;
	
	valor_dependentes=dependentes*32;
	
	cout<<"\n A quantidade de horas extras trabalhadas �: ";
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
		cout<<"\nA gratifica��o ser� de: "<<gratificacao;
	}
	else{
		gratificacao=50;
		cout<<"\nA gratifica��o ser� de: "<<gratificacao;
	}
			
	salario_liquido=salario_bruto - IRRF + gratificacao;
	
	cout<<"O sal�rio l�quido �: "<<salario_liquido;
	
	return 0; 	
}
