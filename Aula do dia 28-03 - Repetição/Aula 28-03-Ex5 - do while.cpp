#include<iostream>
#include<cstdlib>

using namespace std;

int main (){

    int i=1, num1;

    cout << " Informe um numero: ";
    cin >> num1;
    cout << " os 10 antecesssores de " << num1 << " sao " << endl;

    do {
        cout << num1 - i << endl;
        i = i+1;
    }
    while(i <=10);
}