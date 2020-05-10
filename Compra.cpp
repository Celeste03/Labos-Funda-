#include "iostream"
using namespace std;
int main (void)
{
    int nombre, cantidad ;
    float precio, total;

    cout << "Compra" << endl << endl;

    cout << "Precio de el producto: $ "; 
    cin >> precio; 


    cout << "Cantidad de el producto: ";
    cin >> cantidad;

    cout << "Nombre de el porducto: ";
    cin >> nombre; 
 
    total  = cantidad*precio;
    cout << "Total a pagar: $ " << total << endl << endl ; 
}