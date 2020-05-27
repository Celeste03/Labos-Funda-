#include "iostream "
using namespace std;
int main (void)
{
    int n1,n2, resultado;

    cout << "Verificar si un numero es divisible entre otro" <<endl <<endl;

   cout << "Ingrese el primer numero: ";
   cin >> n1;

   cout << "Ingrese el segundo numero: ";
   cin >> n2;

   if (n1 % n2 ==0  )
   {
       cout << n1 << "  Es divisor de  " << n2 << endl ;
   }
   else 
   { 
       cout << n1 << "  No es divisor de  " << n2 << endl;
   }

    resultado = n1 % n2 ;
    cout << "El residuo es: " << resultado ; 

    return 0; 
}