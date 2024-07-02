#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
    float nota1, nota2, nota3, media;
    string matricula;

    cout << "Informe o seu numero de identificacao (matricula): ";
    cin >> matricula;

    cout << "Informe tres notas para calcular a media entre elas" << endl;
    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;

    media = (nota1 + (nota2 * 2)+ (nota3 * 3)) /6;

    cout << endl;
    cout << matricula << endl;
    cout << nota1 << endl;
    cout << nota2 << endl;
    cout << nota3 << endl;
    cout << "A media das suas notas e de: " << fixed << setprecision(2) << media << endl;

    if(media >=9){
        cout << "Conceito A" << endl;
        cout << "Aprovado" << endl;
    }

    else if (media > 7.5 && media < 9.0)
    {
        cout << "Conceito B" << endl;
        cout << "Aprovado" << endl;
    }
    else if ( media == 6 && media < 7.5)
    {
        cout << "Conceito C" << endl;
        cout << "Aprovado" << endl;
    }

    else if (media == 4 && media < 6.0)
    {
        cout << "Conceito D" << endl;
        cout << "Reprovado" << endl;
    }
    else if (media < 4)
    {
        cout << "Conceito E" << endl;
        cout << "Reprovado" << endl;
    }
    
}