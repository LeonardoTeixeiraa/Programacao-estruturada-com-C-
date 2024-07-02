#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    char produto[30];
    float valor, desconto, valor_final;

    cout << "Digite o nome de um produto: " ;
    cin >> produto;

    cout << "Informe o valor do produto: ";
    cin >> valor;
    
    valor_final = valor - (valor * 0.13);
    desconto = (valor * 0.13);

    cout << "Produto: " << produto << endl;
    cout << "Valor: " << valor << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor final: " << valor_final << endl;
}
