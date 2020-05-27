#include "iostream"
using namespace std; 
int main (void)
{ 
    int N;

    cout << "Determinar si un numero es positivo, Negativo o 0" << endl << endl; 

    cout << "Ingrese el numero: ";
    cin>> N;

    if (N>0)
    { 
        cout << "El numero es positivo" << endl << endl;
        
    }
    else if (N<0)
    { 
        cout << "El numero es Negativo" << endl << endl ; 
    }
    else 
    { 
        cout << "El numero es cero";
    }

    return 0; 
    
}