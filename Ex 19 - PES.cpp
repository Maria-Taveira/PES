//19) Fa�a um programa que receba o sal�rio base e o tempo de servi�o de
// um funcion�rio. Calcule e mostre:	O imposto, conforme a tabela a seguir:
//tabela
//A gratifica��o, de acordo com a tabela a seguir:
//tabela
//O sal�rio l�quido, ou seja, sal�rio base menos imposto mais gratifica��o.
// A categoria, que est� na tabela a seguir

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario_base, imposto, gratificacao, salario_liquido;
    int tempo_servico, classificacao;

    cout<<"Digite o sal�rio base do funcion�rio: ";
    cin>>salario_base;

    cout<<"\nDigite o tempo de servi�o do funcion�rio (em anos): ";
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

    // Determina a classifica��o
    if (salario_liquido <= 350) {
        cout<<"\nclassificacao = A";
    } else if (salario_liquido > 350 && salario_liquido <= 600) {
        cout<<"\nclassificacao = B";
    } else {
        cout<<"\nclassificacao = c";
    }

    // Mostra os resultados
    cout << "\nImposto: " << imposto;
    cout << "\nGratifica��o: " << gratificacao;
    cout << "\nSal�rio l�quido: " << salario_liquido;
    

    return 0;
}

