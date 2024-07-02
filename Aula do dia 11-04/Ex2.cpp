#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int ouro, prata, bronze, soma_medalhas;

    cout << "Digite o numero de medalhas de OURO que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> ouro;
    cout << endl;
    cout << "Digite o numero de medalhas de PRATA que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> prata;
    cout << endl;
    cout << "Digite o numero de medalhas de BRONZE que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> bronze;
    cout << endl;

    soma_medalhas = ouro + prata + bronze;

    cout << "O Brasil ganhou " << soma_medalhas << " medalhas nas olimpiadas." << endl;

}