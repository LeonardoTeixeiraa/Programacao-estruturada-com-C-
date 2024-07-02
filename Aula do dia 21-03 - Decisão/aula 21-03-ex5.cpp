#include <cstdlib>
#include <iostream>
#include <cctype>

using namespace std;

int main(int argv, char** argc){

    char bolo;

    cout << "Escolha uma opcao do cardapio para ver o valor" << endl;
    cout << "Digite - C - para bolo de Chocolate" << endl;
    cout << "Digite - B - para bolo de Banana" << endl;
    cout << "Digite - A - para bolo de Amendoim" << endl;
    cout << "Digite - L - para bolo de Limao" << endl;
    cout << "Digite - F - para bolo de Fuba" << endl;
    cin >> bolo;
    bolo = toupper(bolo);

    switch(bolo){
        case 'C':
            cout << "Bolo de chocolate: 14.00 reais" << endl;
            break;
        case 'B':
            cout << "Bolo de banana: 17.00 reais" << endl;
            break;
        case 'A':
            cout << " Bolo de amendoim: 13.00 reais" << endl;
            break;
        case 'L':
            cout << "Bolo de limao: 15.00 reais" << endl;
            break;
        case 'F':
            cout << " Bolo de fuba: 12.00 reais" << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }

}
 