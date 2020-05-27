#include "iostream"
#include "string.h"
#include "list"
using namespace std;
int main(void)
{ 
   char  palabra[100],V1,V2,buscar_la_ultima_letra;
   int longitud=0;
   cout << endl << endl ; 
   cout << "Ingrese la palabra: ";
   cin.getline(palabra,100,'\n');
   longitud= strlen(palabra) ; 

   V1 = palabra[0] ;

   V2 = strlen(palabra) ;

   buscar_la_ultima_letra = palabra[longitud-1];

   if (palabra[0]==palabra[longitud-1])
   { 
       cout << "La primera y ultima letra SON iguales" <<endl <<endl;
   }
   else 
   { 
       cout << "La primera y ultima letra NO son iguales"<< endl << endl;
   }
  return 0;


}