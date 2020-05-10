#include "iostream"
#include "math.h"
using namespace std;
int main (void)
{
    float a, b, c, calculo_de_raiz, x1 , x2;

    cout << "Resultado de una formula cuadratica" << endl << endl; 

    cout << " Digite el valor de a: "; 
    cin >> a;

    cout << "Digite el valor de b: ";
    cin >> b; 

    cout << "Digite el valor de c: ";
    cin >> c; 

    calculo_de_raiz = sqrt(b *b - 4 *a *c);
    cout << "El calculo de raiz es: " << calculo_de_raiz << endl; 

    x1 = (-b +calculo_de_raiz) / (2 *a); 
    cout << " x1 : " << x1 << endl; 

    x2 = (-b - calculo_de_raiz) / (2*a);
    cout << " x2 : " << x2 << endl; 
}