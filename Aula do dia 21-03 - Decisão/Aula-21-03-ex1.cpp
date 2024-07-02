#include<cstdlib>
#include<iostream>

using namespace std;

int main(int argv, char** argc){

    int idade;

    cout << "Digite a sua idade: ";
    cin >> idade;

    if(idade >=18 ){
        cout << "Voce e maior de idade!" << endl;

    }

    else
        cout << "Voce e menor de idade!" << endl;
}