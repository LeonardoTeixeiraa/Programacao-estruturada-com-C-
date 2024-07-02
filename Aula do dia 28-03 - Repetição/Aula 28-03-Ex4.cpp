#include<iostream>
#include<cstdlib>

using namespace std;

int main (){

    int i = 1;

    while( i <=100){
        if(i % 10 == 0){ // verifica se existe resto na divisão, se o resto foir  igual a 0 ele executa a função
        cout << "Divisivel por 100: " << i << endl;
        }
        i = i + 1;
    }
}