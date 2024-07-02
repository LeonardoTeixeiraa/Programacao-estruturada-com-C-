#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

    int contador = 0;

    while(contador < 5){
        cout << "Contador = " << contador <<endl;
        // contador = contador + 1;
        // contador += 1;
        contador ++; // a mesma função dos contadores acima
    }
    cout << "ACABOU !!!!" << endl;;

}