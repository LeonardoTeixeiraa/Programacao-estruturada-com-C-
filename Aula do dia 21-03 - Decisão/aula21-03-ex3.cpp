#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argv, char** argc){

    float media;

    cout << "Digite a media do aluno: ";
    cin >> media;

    if(media >= 0 && media <=10){

        cout << "A media e valida!" << endl;
        if(media >= 6) {
            cout << "Aluno foi aprovado com media " << media << endl; 
    }

    
    else {
        cout << "Aluno foi reprovado com media " << media << endl;
    
    } 
}

    else {
    cout << "A media digitada e invalida!!!" << endl;
    }

    }