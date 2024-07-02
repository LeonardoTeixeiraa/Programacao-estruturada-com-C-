#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
//   a função unsigned é utilizada para definir que na variável não pode ser negativa;
// exemplo: ñ existe a idade -18 anos;

    unsigned int idade;
    double pi = 3.1415926535;

    cout << "Infome a sua idade: ";
    cin >> idade;
    cout << " A sua idade e: " << idade << endl;
    cout << "Pi: " << setprecision(2) << pi << endl;

}