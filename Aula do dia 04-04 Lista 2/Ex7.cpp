// 7.	Faça um programa para ler o primeiro nome e o ano de nascimento, de 5 pessoas
//  (uma de cada vez). Calcular a soma das cinco idades lidas, exibir o resultado.
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main (){
    string nome[5];
    int idade[5], nascimento[5], soma_idade = 0, i;

    cout << "Digite o seu primeiro nome e a data nascimento!" << endl;
    for(i=0; i < 5; i++){
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Data de nascimento: ";
        cin >> nascimento[i];
        idade[i] = 2024 - nascimento[i];
        soma_idade += idade[i];
    }
    cout << " A soma das idades e: " << soma_idade << endl;

}

