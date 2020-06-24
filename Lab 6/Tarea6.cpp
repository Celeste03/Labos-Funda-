#include "iostream"
using namespace std;

int repetidor();

int main (void)
{ 
  cout << endl ;
  cout << repetidor();
}

int repetidor()
{
    int numero[100];
    int tam=0,buscar=0,c=0;

    cout << "INGRESE EL TAMAnO DEL VECTOR: ";
    cin >> tam; 
    
    for(int i=0; i<tam; i++)
    {
        cout <<"X["<<(i+1)<<"] =";
        cin >> numero [i];
    }
    
    cout << "Que numero desea buscar: ";
    cin >> buscar ;

    for (int i=0; i<tam; i++)
    { 
        if (numero[i]==buscar)
        c++;
    }
    if (c != 0){
        cout <<"Cuantas veces se repite el numero? :  " ;

    }
    else 
    { 
        cout << "EL numero %d no aparece",buscar;
    }
    return c ;
}