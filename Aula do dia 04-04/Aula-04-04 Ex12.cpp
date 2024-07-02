// Programa que calcula a média aritmética de 20 valores inteiros positivos digitados pelo usuário e exibe o resultado
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    float lista_numeros[20], media = 0;
    int i;
    for (i=0; i < 20; i++){
        cout << "Informe o numero " << i + 1 << ": ";
        cin >> lista_numeros[i];
    }

    for(i=0; i <20; i++){
        media = lista_numeros[i] + media;
    }
    
    media = media/20;

    cout << endl;
    cout << "O resultado da media dos 20 numeros informados e: " << media << endl;

    }
    
