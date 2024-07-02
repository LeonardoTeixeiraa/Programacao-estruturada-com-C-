#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int op_pagamento, n;

    cout << "Quantos produtos voce vai lancar? ";
    cin >> n;
    cout << endl;

    struct produto{
    float valor_produto = 0; 
    float valor_final = 0;
    int op_pagamento = 0;
    char produto[20];
    }strProduto[n];
    
    for(int i=0; i < n; i++){
    cout << "Qual e o produto? ";
    fflush(stdin);
    cin.getline (strProduto[i].produto,20);
    fflush(stdin);
    cout << "Qual e o valor do produto? ";
    cin >>  strProduto[i].valor_produto;
    fflush(stdin);
    cout << endl;

    cout << "De acordo com o menu abaixo, informe com deseja pagar " << endl;
    cout << "1 - pagamento a vista com (10% de desconto)." << endl;
    cout << "2 -pagamento com 30 dias de prazo (sem desconto)." << endl;
    cout << "3 - pagamento em 10X (Cartao de credito - sem desconto - sem acrescimo.)" << endl;
    cout << "4 - pagamento em 10X (Boleto - 10% acrescimo)." << endl;
    cin >> op_pagamento;
    fflush(stdin);
    cout << endl;

    switch (op_pagamento)
    {
    case 1:
        strProduto[i].valor_final = strProduto[i].valor_produto - (strProduto[i].valor_produto * 0.1); 
        cout << "O valor do produto e: R$ " << strProduto[i].valor_final << endl;
        
        break;
    case 2:
        strProduto[i].valor_final = strProduto[i].valor_produto;
        cout << "O valor do produto e: R$ " << strProduto[i].valor_final << endl;
        break;
    case 3:
        strProduto[i].valor_final = strProduto[i].valor_produto;
        cout << "O valor do produto e: R$ " << strProduto[i].valor_final << endl;
    case 4: 
        strProduto[i].valor_final = strProduto[i].valor_produto + (strProduto[i].valor_produto * 0.1);
        cout << "O valor do produto e: R$ " << strProduto[i].valor_final << endl;
        break;
    
    default:
        cout << "Opcao inválida!!! " << endl;
        break;
    }

    }
}