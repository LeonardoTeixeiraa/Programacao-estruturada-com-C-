#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int num, i;

    cout << "Informe um numero para que seja apresentada a tabuada: ";
    cin >> num;
    cout << endl << endl << endl;

    cout << "Tabuada do " << num << endl;
    cout << "********************" << endl;
    for(i=1; i<=10; i++){
        cout << num << " X " << i << " = " << num *i << endl;
    }
    cout << "********************" << endl << endl << endl;;
}