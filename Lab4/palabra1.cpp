#include "iostream"
#include "string.h"
using namespace std; 
int main (void)
{ 
   char  palabra[100];
   int longitud=0;

   cout << endl << endl ; 
   cout << "Ingrese la palabra: ";
   cin.getline(palabra,100,'\n');

   longitud= strlen(palabra) ;
   cout << endl << endl; 
   cout << "Numero de caracteres de la palabra: " << longitud << endl <<endl;
   
   if(longitud>10)
   { 
      cout <<endl << "ES MAYOR A 10 CARACTERES" << endl <<endl;
   }
   else 
   { 
      cout <<endl << "ES MENOR A 10 CARACTERES" << endl << endl;
   }

   if (longitud%2==0)
   { 
      cout << "ES PAR"<< endl << endl;
   }
   else 
   {
      cout << "ES IMPAR" << endl << endl;
   }

  return 0 ; 
  

}