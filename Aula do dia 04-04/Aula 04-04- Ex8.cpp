#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cctype>

using namespace std;

int main(){
    char sexo;
    float altura, peso_ideal;

    cout << "Informe os dados abaixo para que seja calculado o peso ideal" << endl;
    cout << "Informe o seu sexo, digite M para masculino ou F para feminino:";
    cin  >> sexo;
    sexo = toupper(sexo);
    cout << "Informe a sua altura: ";
    cin >> altura;

        switch(sexo){
            case 'M':
                peso_ideal = (72.7 * altura) - 58;
            break;
            
            case 'F':
                peso_ideal = (62.1 * altura) - 44.7;
            break;

            default:
                cout << "A letra digitada e invalida! digite M para masculino ou F para feminino." << endl;
        }

    cout << fixed << setprecision(2) << "O peso ideal para voce e de: " << peso_ideal << "Kg" << endl;

}