#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    float numero;

    cout << "Informe um numero: ";
    cin >> numero;

    if( numero > 0){
        cout << "O numero informado e positivo" << endl;
    }

    else if (numero == 0)
    {
        cout << "O numero informado e zero" << endl;
    }

    else{
        cout << "O numero informado e negativo" << endl;
    }
}