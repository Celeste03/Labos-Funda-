#include "iostream"
using namespace std; 
int main (void)
{
    int radio;
    float area, perimetro;

    cout << " Area y perimeto de un circulo " << endl << endl; 

    cout << " Coloque el radio de el circulo: ";
    cin >> radio;

    area = (3.1416*radio*radio);
    cout <<" El area es: " << area<< endl; 

    perimetro = (3.1416*3.1416*radio);
    cout << "El perimetro es: " << perimetro << endl; 
}