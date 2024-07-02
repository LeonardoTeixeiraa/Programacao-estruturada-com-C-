#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int num, i = 0;

    do{
        cout << " Informe um numero: ";
        cin >> num;
        i = i + 1;
    }
    while(num !=0);
    
    cout << "Foram informados " << i << endl;
}