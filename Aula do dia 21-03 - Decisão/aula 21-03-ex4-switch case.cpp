#include <cstdlib>
#include <iostream>


using namespace std;

int main(){
 
    int op;

    cout << "Digite 1 para Prato do dia!" << endl;
    cout << "Digite 2 para Lasanha!" << endl;
    cout << "Digite 3 para Picanha Grelhada" << endl;
    cout << "Digite 4 para salada simples " << endl;
    cin >> op;

    switch(op){
        case 1:
            cout << "Prato  do dia: 17 reais" << endl;
            break;

        case 2: 
            cout << "Lasanha: 17 reais" << endl;
            break;

        case 3: 
            cout << "Picanha Grelhada: 21.90 reais" << endl;
            break;

        case 4 : 
            cout << " Salada simples: 7.90 reais" << endl;
            break;

        default:
            cout << "Opcao invalida!" << endl;


    }
        
}