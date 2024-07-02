// 2.	Faça um programa para ler N números inteiros – informe um de cada vez. A repetição será encerrada quando o usuário digitar o número 0. O programa deve informar quantos números foram digitados. 
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int N, i=0;

    do{
        cout << "Digite um numero: ";
        cin >> N;
        i++;

        if(N == 0){
            cout << endl;
            cout << "FIM DO PROGRAMA!" << endl;
            break;
        }

    }

    while(N != 0);

    cout << "Foram informados " << i << " numeros" << endl;

}
