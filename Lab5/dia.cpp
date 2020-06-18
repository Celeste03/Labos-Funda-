#include "iostream"

using namespace std;

int calendar();

int main (void)
{ 
    int dia;
    cout << endl << endl;
    cout << "INGRESE EL DIA, EL MES Y EL AnO DE EL DIA DE HOY:";
    cout <<endl <<endl ;
    cout << calendar();
    return 0 ;
}
int calendar()
{ 
    int d,m,a,s;
  char p,fin;

    cin >> d >> p >> m >> p >> a;
    
    if (d<=31 || d<=31){ 
      d = d + 1;
    }
    
    if (d==31 || d==32)
    {
      d=1 ;
      m = m+1 ;
    } 
    if (m==13)
    { 
     m=1;
     a = a +1; 
    } 
    cout << d <<'/' << m << '/' << a ;
    
   if (a % 4 !=0 || (a %100 ==0 && a %400 !=0))
    { 
        cout << endl << endl;
        cout << "no es bisiesto"<<endl ;
        cout << endl << endl;
    }
    else                                    
    { 
       cout << endl << endl;
        cout << "Es bisiesto" << endl ;
        cout << endl << endl;
    }   
    
    

    cout << endl << endl ;
    system ("pause");
    return 0;

}