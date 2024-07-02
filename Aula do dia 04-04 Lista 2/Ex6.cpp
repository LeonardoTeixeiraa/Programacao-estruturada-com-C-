// 6.	Escreva um programa para calcular a soma dos 
//  números pares contidos entre 100 e 200, inclusive. Exiba o resultado da soma
#include<iostream>
#include<cstdlib>

using namespace std;

int main (){
    int i, soma = 0;

    for(i = 100; i<=200; i++){
        if(i % 2 == 0){
            soma+=i;    
        }
    }
    cout << "O resultado da soma dos pares contidos no intervalo de 100 ate 200, inclusive, e: " << soma << endl;
}

