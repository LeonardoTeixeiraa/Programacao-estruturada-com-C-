#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

    int idade;

    cout << "Categorias na natacao" << endl;
    cout << "Informe a sua idade para que seja exibida a categoria a qual voce esta incluso: ";
    cin >> idade;

    if(idade >= 5 && idade <= 7)
    {
        cout << " A  sua categoria  Infantil A" << endl;
    }

    else if (idade >=8 && idade <= 10)
    {
        cout << "A  sua categoria e Infantil B" << endl;
    }
    else if (idade >= 11 && idade <= 13)
    {
        cout << "A sua categoria e Juvenil A" << endl;
    }
    else if (idade >= 14 && idade <= 17)
    {
        cout << "A sua categoria e Juvenil B" << endl;
    }
    else if (idade >=18)
    {
        cout << " A sua categoria e Adulto" << endl;
    }
    
}


