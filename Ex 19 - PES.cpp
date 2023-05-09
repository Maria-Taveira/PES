//19) Faça um programa que receba o salário base e o tempo de serviço de
// um funcionário. Calcule e mostre:	O imposto, conforme a tabela a seguir:
//tabela
//A gratificação, de acordo com a tabela a seguir:
//tabela
//O salário líquido, ou seja, salário base menos imposto mais gratificação.
// A categoria, que está na tabela a seguir

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario_base, imposto, gratificacao, salario_liquido;
    int tempo_servico, classificacao;

    cout<<"Digite o salário base do funcionário: ";
    cin>>salario_base;

    cout<<"\nDigite o tempo de serviço do funcionário (em anos): ";
    cin>>tempo_servico;

     
    if (salario_base < 200.0) {
        imposto = 0.0;
    } else if (salario_base >= 200 && salario_base <= 450.0) {
        imposto = salario_base * 3 / 100;
    } else if (salario_base > 450 && salario_base <= 700.0) {
        imposto = salario_base * 8 / 100;
    } else {
        imposto = salario_base * 12 / 100;
    }

    if (salario_base > 500 && tempo_servico <= 3) {
        gratificacao = 20;
    } else if (salario_base > 500 && tempo_servico > 3) {
        gratificacao = 30;
    } else if (salario_base <= 500 && tempo_servico <= 3) {
        gratificacao = 23;
    } else if (salario_base <= 500 && tempo_servico > 3 && tempo_servico <= 6) {
        gratificacao = 35;
    } else {
        gratificacao = 33;
    }

    salario_liquido = salario_base - imposto + gratificacao;

    // Determina a classificação
    if (salario_liquido <= 350) {
        cout<<"\nclassificacao = A";
    } else if (salario_liquido > 350 && salario_liquido <= 600) {
        cout<<"\nclassificacao = B";
    } else {
        cout<<"\nclassificacao = c";
    }

    // Mostra os resultados
    cout << "\nImposto: " << imposto;
    cout << "\nGratificação: " << gratificacao;
    cout << "\nSalário líquido: " << salario_liquido;
    

    return 0;
}

