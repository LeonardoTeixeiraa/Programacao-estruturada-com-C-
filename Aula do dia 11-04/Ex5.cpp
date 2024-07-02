#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int i, cont, pin, pin_verificacao;

    cout << "Crie uma senha de 4 numeros: ";
    cin >> pin;

    cont = 0;
    for(i=0; i<=3; i++){
        cout << "Digite a sua senha: ";
        cin >> pin_verificacao;

        if(pin == pin_verificacao){
            cout << "Senha correta." << endl;
        break;
        }

        else{
            cout << "Senha Incorreta." << endl;
        }
        cont++;
        
    }

    if(cont == 4){
        cout << endl;
        cout << "Voce excedeu o numero de tentativas, por favor, tente novamente mais tarde! " << endl;
    }
    else{
        cout << " ";
    }
}