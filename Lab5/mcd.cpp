# include "iostream"

using namespace std; 

int mcd(); 

int main (void)
{ 
  cout << "MCD DE DOS NUMEROS\n\n";

 
  cout << endl;
  cout << mcd();
  return 0;
}
int mcd()
{
   
 int total,mayor, menor, residuo;
 
 cout << "Digite el numero mayor: ";
 cin >> mayor;
 cout << "Digite el numero menor: ";
 cin >> menor;
 do
 {
  residuo = mayor % menor;
  if(residuo != 0){
  mayor = menor;
  menor = residuo;
 }
 }
 while(residuo != 0);

 cout << "El MCD es: " << menor;
 
 return 0 ;
}