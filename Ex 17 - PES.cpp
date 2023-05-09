//17) Faça um programa que receba:
//	O código de um produto comprado, supondo que a digitação do código do
// produto seja sempre válida, isto é, um número inteiro entre 1 e 10.
//	O peso do produto em quilos.
//	O código do país de origem, supondo que a digitação do código seja 
//sempre válida, isto é, um número inteiro entre 1 e 3.
//	Calcule e mostre:
//	O peso do produto convertido em gramas.
//	O preço total do produto comprado.
//	O valor do imposto, sabendo que ele é cobrado sobre o preço total do 
//produto comprado e depende do país de origem.
//	O valor total, preço total do produto mais imposto.
//tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int codProduto, codPais, precoG;
    double pesoKg, pesoG, precoTotal, imposto, valorTotal;
    
    cout << "Digite o código do produto (1 a 10): ";
    cin >> codProduto;
    
    cout << "Digite o peso do produto em quilos: ";
    cin >> pesoKg;
    
    cout << "Digite o código do país de origem (1 a 3): ";
    cin >> codPais;
    
    if (codProduto >= 1 && codProduto <= 4) {
        precoG = 10;
    } else if (codProduto >= 5 && codProduto <= 7) {
        precoG = 25;
    } else if (codProduto >= 8 && codProduto <= 10) {
        precoG = 35;
    }
    
    pesoG = pesoKg * 1000;
    precoTotal = pesoG * precoG / 1000.0;
    
    if (codPais == 1) {
        imposto = 0.0;
    } else if (codPais == 2) {
        imposto = precoTotal * 0.15;
    } else if (codPais == 3) {
        imposto = precoTotal * 0.25;
    }
    
    valorTotal = precoTotal + imposto;
    
    cout << "Peso do produto em gramas: " << pesoG << "g\n";
    cout << "Preço total do produto: R$" << precoTotal << "\n";
    cout << "Imposto: R$" << imposto << "\n";
    cout << "Valor total: R$" << valorTotal << "\n";
    
    return 0;
}
