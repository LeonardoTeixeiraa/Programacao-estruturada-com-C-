#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    float lista_numeros[15];
    int contador = 0, i;
     
    for(i=0; i < 15; i++){
        cout << "Informe um numero: ";
        cin >> lista_numeros[i];

        if(lista_numeros[i] < 0 ){
            contador++;
        }
    }

    if(contador > 0 ){
        cout << endl; 
        cout << "Foram informados " << contador << " numeros negativos!" << endl;
    }

    else {
        cout << endl;
        cout << "Nao foi informado nenhum numero negativo!" << endl;
    }
          
}

