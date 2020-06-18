#include "iostream"
#include "ctime"

using namespace std;

int reloj();

int main (void)
{ 
  int h,m,s;
  char p; 

  cout << "Ingrese la hora: "; 

  cout << endl;
  cout << reloj();

}
int reloj() 
{ int h,m,s;
   char p; 

  cin >> h >> p >> m >> p >> s ;
  s=s + 1;
  if (s==60){
      s=0 ;
      m = m+1 ;} 
      if (m==60){ 
          m=0;
          h = h +1;}
          if (h==24) { 
              h=0;}

  if (h < 10){ cout << 0;}
  cout << h << ':';
  if (m <10) {cout << 0;}
  cout << m << ':';
  if (s < 10) { cout << 0; }
  cout << s ; 
 cout << endl << endl ;
 
 
 return 0 ;
 
}