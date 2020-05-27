#include "iostream"
using namespace std;
int main (void)
{ 
    int numero;
    cout << endl  ; 
    cout << "PAR O IMPAR" << endl <<endl; 

    cout << "Ingrese un numero: ";
    cin>> numero ; 

    if (numero%2==0)
    { 
        cout << "El numero es PAR" << endl << endl;
    }
    else
    {
        cout << "El numero es IMPAR" << endl << endl;
    }
    return 0; 
    
}