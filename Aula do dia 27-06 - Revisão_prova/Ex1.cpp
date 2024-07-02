#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(){
    int ouro, prata, bronze, soma;
    
    cout << "Informe o numero de medalhas de ouro: ";
    cin >> ouro;
    cout << "Informe o numero de medalhas de prata: ";
    cin >> prata;
    cout << "Informe o numero de medalhas de bronze: ";
    cin >> bronze;

    soma = ouro + prata + bronze;
    fstream arq;
    arq.open("Numero_de_medalhas.txt", ios::out | ios::app);
    if (arq.is_open()){
    arq << "O numero de medalhas do brasil e: " << soma << endl;
    arq.close();
    }
    else{
        arq << "ERRO: O arquivo nao foi aberto ou nao existe " << endl;
    }

}