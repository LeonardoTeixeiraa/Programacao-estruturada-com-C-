#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    float numero;

    cout << "Informe um numero: ";
    cin >> numero;

    if(numero >=0){
        cout << "O numero digitado e positivo: " << endl;
    }

    else{
        cout << "O numero digitado e negativo" << endl;
    }

}
