//17) Fa�a um programa que receba:
//	O c�digo de um produto comprado, supondo que a digita��o do c�digo do
// produto seja sempre v�lida, isto �, um n�mero inteiro entre 1 e 10.
//	O peso do produto em quilos.
//	O c�digo do pa�s de origem, supondo que a digita��o do c�digo seja 
//sempre v�lida, isto �, um n�mero inteiro entre 1 e 3.
//	Calcule e mostre:
//	O peso do produto convertido em gramas.
//	O pre�o total do produto comprado.
//	O valor do imposto, sabendo que ele � cobrado sobre o pre�o total do 
//produto comprado e depende do pa�s de origem.
//	O valor total, pre�o total do produto mais imposto.
//tabela

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int codProduto, codPais, precoG;
    double pesoKg, pesoG, precoTotal, imposto, valorTotal;
    
    cout << "Digite o c�digo do produto (1 a 10): ";
    cin >> codProduto;
    
    cout << "Digite o peso do produto em quilos: ";
    cin >> pesoKg;
    
    cout << "Digite o c�digo do pa�s de origem (1 a 3): ";
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
    cout << "Pre�o total do produto: R$" << precoTotal << "\n";
    cout << "Imposto: R$" << imposto << "\n";
    cout << "Valor total: R$" << valorTotal << "\n";
    
    return 0;
}
