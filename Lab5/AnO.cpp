#include "iostream"
#include "stdlib.h"
#include "stdio.h" 

using namespace std;

bool anobi();

int main (void)
{   
    int AnO;
    cout <<endl;
    cout << anobi();
   
}
bool anobi() 
{ 
    int  ano;
    
     cout << "ingrese el AnO: "; 
     cout << endl <<endl;
     cin >> ano;

   if(ano % 4 !=0 || (ano %100 ==0 && ano %400 !=0))
    { 
        cout << "no es bisiesto"<<endl ;
        cout << false << endl ;
        cout << endl << endl;
    }
    else                                     // 0 = faloso  1=true
    { 
        cout << "Si es bisiesto" << endl ;
        cout << true << endl;
        cout << endl << endl;
    }

   return 0 ;
}