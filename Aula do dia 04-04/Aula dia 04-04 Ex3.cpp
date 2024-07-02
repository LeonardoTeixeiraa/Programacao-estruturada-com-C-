#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

    float raio, perimetro, area;


    cout << "Digite o raio do circulo: ";
    cin >> raio;

    perimetro = 2 * M_PI * raio;

    cout << " O valor do perimetro e: " << fixed << setprecision(2) << perimetro << endl;

    area = M_PI * (raio * raio);

    cout << " O valor da area do circulo e: " << fixed << setprecision(2) << area << endl;

   

}


