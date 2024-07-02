#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    float numero[5], media = 0, soma = 0;

    for(int i = 0; i < 5; i++){
        cout << "Informe um numero real: ";
        cin >> numero[i];
        soma += numero[i]; 
    }
    media = soma/2;
    int cont_1 = 0;
    int cont_2 = 0;
    for(int i = 0; i < 5; i++){
        if(numero[i] == 4){
            cont_1 += 1;
        }
        if(numero[i] > media){
            cont_2 += 1;
        }
    }
    cout << endl;
    if(cont_1 > 0 ){
        cout  << "Exitem " << cont_1 << " numeros iguais a 4" << endl;
    }
    else{
        cout << "Nao existem numeros iguais a 4" << endl;
    }
    cout << endl;
    if(cont_2 > 0) {
        cout << "Existem " << cont_2 << " numeros maiores que media " << endl;
    }
    else{
        cout << "Nao existem numeros que sao maiores que a media " << endl;
    }
} 