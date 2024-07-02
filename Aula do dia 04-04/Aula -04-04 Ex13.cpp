// escreva um programa que receba 20 números do usuário (um de cada vez). Calcule a média dos números pares digitados.
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    float  media=0;
    int i, quant_par=0, lista_numeros[20], soma_pares=0;

    for(i=0; i < 20; i++){
        cout << "informe o " << "numero " << i + 1 << ": ";
        cin >> lista_numeros[i];

        if(lista_numeros[i] % 2 == 0){
            soma_pares += lista_numeros[i];
            quant_par++;
        }
    }
     if(quant_par > 0){
    media = soma_pares/quant_par;
    cout << endl;
    cout << "O resultado da media dos pares digitados e: " << media << endl;
     }

    else{
        cout << endl;
        cout << "Nao foram digitados numeros pares!" << endl;
    }
}