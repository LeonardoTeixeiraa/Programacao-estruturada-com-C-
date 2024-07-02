// 5.	Escreva um programa para exibir os números contidos no intervalo de n a m, 
// inclusive. n e m devem ser valores informados pelo usuário (os números devem ser exibidos em ordem crescente).

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n, m;

    cout << "Informe dois numeros" << endl;
    cout << "Informe o primeiro numero: ";
    cin >> n;
    cout << " Informe o segundo numero: ";
    cin >> m;

    if (n > m){
        for( m; m <= n; m++){
            cout << m << endl;        
        }
    }

    else{
        for(m; m >= n; m--){
            cout << m << endl;
        }
    }

}