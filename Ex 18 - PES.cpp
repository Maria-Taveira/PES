//18) Fa�a um programa que receba:
//	O c�digo do estado de origem da carga de um caminh�o, supondo que a 
//digita��o do c�digo 	do estado seja sempre v�lida, isto �, um n�mero 
//inteiro entre 1 e 5.
//O peso da carga do caminh�o em toneladas.
//O c�digo da carga, supondo que a digita��o do c�digo seja sempre v�lida, 
//isto �, um n�mero inteiro entre 10 e 40.
//Calcule e mostre:
//O peso da carga do caminh�o convertido em quilos.
//O pre�o da carga do caminh�o.
//O valor do imposto, sabendo que o imposto � cobrado sobre o pre�o da carga 
//do caminh�o e depende do estado de origem.
//O valor total transportado pelo caminh�o, pre�o da carga mais imposto.
//tabela


#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigoEstado, codigoCarga;
    float pesoCarga, pesoCargaQuilos, precoCarga, imposto, valorTotal;

    cout<<"Digite o c�digo do estado de origem da carga (entre 1 e 5): ";
    cin>>codigoEstado;

    cout<<"\nDigite o peso da carga em toneladas: ";
    cin>>pesoCarga;

    cout<<"\nDigite o c�digo da carga (entre 10 e 40): ";
    cin>>codigoCarga;

    pesoCargaQuilos = pesoCarga * 1000;

    if (codigoCarga >= 10 && codigoCarga <= 20){
        precoCarga = pesoCargaQuilos * 100;
    }
    else if (codigoCarga >= 21 && codigoCarga <= 30){
        precoCarga = pesoCargaQuilos * 250;
    }
    else if (codigoCarga >= 31 && codigoCarga <= 40){
        precoCarga = pesoCargaQuilos * 340;
    }
    
    
    if (codigoEstado == 1){
        imposto = precoCarga * 0.35;
    }
    else if (codigoEstado == 2){
        imposto = precoCarga * 0.25;
    }
    else if (codigoEstado == 3){
        imposto = precoCarga * 0.15;
    }
    else if (codigoEstado == 4){
        imposto = precoCarga * 0.05;
    }
    else if (codigoEstado == 5){
        imposto = 0;
    }

    valorTotal = precoCarga + imposto;

    cout << "\nPeso da carga em quilos: "<<pesoCargaQuilos << " kg";
    cout << "\nPre�o da carga: R$ "<<precoCarga;
    cout << "\nImposto: R$ "<<imposto;
    cout << "\nValor total transportado: R$ "<<valorTotal;

    return 0;
}
