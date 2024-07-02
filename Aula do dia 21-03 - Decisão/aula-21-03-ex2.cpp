#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argv, char** argc){
    int GolsSaopaulo, GolsPalmeiras;

    cout << "Placar Sao Paulo X Palmeiras" << endl;
    cout << "Digite a quantidade de gols do Sao Paulo: ";
    cin >> GolsSaopaulo;
    cout << "Digite a quantidade de gols do palmeiras: ";
    cin >> GolsPalmeiras;

    if (GolsSaopaulo > GolsPalmeiras){
        cout << "A festa e tricolor!!!" << endl;
    }

    else{
    cout << "A festa e dos porcos!!!" << endl;
    }
}