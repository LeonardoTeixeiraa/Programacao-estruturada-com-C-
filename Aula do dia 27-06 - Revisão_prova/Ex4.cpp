#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int tam_matriz = 0, contador = 1;
    
    cout << "Informe um numero para determinar o tamanho da matriz N x N: ";
    cin >> tam_matriz;
    int matriz[tam_matriz][tam_matriz];
    cout << endl;

    for(int i=0; i < tam_matriz; i++){
        for(int j=0; j < tam_matriz; j++){
            matriz[i][j] = contador;
            contador += 1;
        }
    }
    cout << "\t---------Exibindo a matriz original-----------" << endl;
    for(int i=0; i < tam_matriz; i++){
        for(int j=0; j < tam_matriz; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "\t---------Exibindo a Matriz sem a ultima linha e a ultima coluna---------" << endl;
    for(int i=0; i < tam_matriz - 1; i++){
        for(int j=0; j < tam_matriz - 1; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
        }
}