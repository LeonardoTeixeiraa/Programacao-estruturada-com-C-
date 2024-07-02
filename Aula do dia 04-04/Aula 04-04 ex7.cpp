#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
    int codigo, quant;
    float valor;

    cout <<  setw(30) << "*******CARDAPIO*******" << endl;
    cout << "Especificacao " << setw(10) << "Codigo" << setw(10) << "Preco "<< endl;
    cout << "Cachorro quente" << setw(8) <<  "100" << setw(10) <<  " 9,20" <<  endl;
    cout << "Bauru simples" << setw(10) <<    "101" << setw(10)  <<"12,00" << endl;
    cout << "Bauru com ovo" << setw(10) <<    "102" << setw(10) << "13,00" << endl;
    cout << "Hamburguer" << setw(13) <<       "103" << setw(10) << "10,00"<<  endl;
    cout << "Cheeseburger" << setw(11) <<     "104" << setw(10) << "12,00" <<endl;
    cout << "Refrigerante Lata"<< setw(6) << "105" << setw(10) <<  "5,00" <<endl;
    cout << "Agua" << setw(19) << "106" <<  setw(10) <<    "3,00" << setw(10)  << endl << endl;
    cout << "Digite o codigo do produto desejado: ";
    cin  >> codigo;
    cout << "Digite a quantidade desejada: ";
    cin  >> quant;

    switch(codigo){
        case 100:
            valor = 9.20 * quant;
            break;

        case 101: 
            valor = 12.00 * quant;
            break;

        case 102:
            valor = 13.00 * quant;
            break;

        case 103:
            valor = 10.00 * quant;
            break;

        case 104:
            valor = 12.00 * quant;
            break;

        case 105:
            valor = 5.00 * quant;
            break;
        
        case 106:
            valor = 3.00 * quant;
            break;

        default:
            cout << "Codigo Invalido" << endl;

    }
    cout << endl;
    cout << fixed << setprecision(2) << "Valor: " << fixed << valor << " R$" << endl;

}