#include "iostream" 
using namespace std;
int main(void)
{
    int Primera_nota, Segunda_nota, Tercera_nota, Prom, sum; 

    cout << "PROMEDIO" << endl << endl; 

    cout << "Digite la primera nota ";
    cin >> Primera_nota;

    cout << "Digite la segunda nota ";
    cin >> Segunda_nota ;

    cout << "Digite la tercera nota ";    
    cin >> Tercera_nota; 

    sum = Primera_nota+Segunda_nota+Tercera_nota;
    cout << "La suma de las notas es: " << sum << endl;

    Prom = (Primera_nota+Segunda_nota+Tercera_nota)/3;
    cout << "El promedio es:" << Prom << endl;
}