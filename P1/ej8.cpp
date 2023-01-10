// POO - C++ kmy                                                      //
// guia 1 - ej 8                                                      //
////////////////////////////////////////////////////////////////////////
#include <iostream> 
#include <math.h> 

using namespace std;

void MCD_Euclides(int a, int b){
  int r = a%b;
  if (r == 0){
    cout << "El MCD es: " << b << endl;
  }
  else{
    MCD_Euclides(b, r);   
  }
}

int main(){
  int a, b;
  
  cout << "Ingrese primer numero A: " << endl;
  cin >> a;
  cout << "Ingrese segundo numero B (A>=B): " << endl;
  cin >> b;

  MCD_Euclides(a, b);
  
  return 0;
}