#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int numero;

    cout << "Informe um numero: ";
    cin >> numero;

    if( numero % 2 == 0 ){
        cout << "Numero " << numero << " e par!!!" << endl;
    }

    else{
        cout << "Numero " << numero << " e impar!!!" << endl;
    }
}