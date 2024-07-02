#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int idade;
    
    cout << "Digite a sua idade: " << endl;
    cin >> idade;
    

    if(idade >= 65){
        cout << "Voce pode ser atendido em fila preferecial" << endl;
        cout << endl;
        cout << endl;
        cout << "Dirija-se ao caixa 1" << endl;
        cout << endl;
    }
    else{
        cout << "Voce sera atendido nos caixas preferenciais." << endl;
        cout << "Dirija-se a um dos caixas: " << endl;
        cout << "Caixa 2;" << endl;
        cout << "Caixa 3;" << endl;
        cout << "Caixa 4;" << endl;
        cout << endl;
    }
}