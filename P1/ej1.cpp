// POO - C++ kmy                                                      //
// guia 1 - ej 1,2                                                    //
////////////////////////////////////////////////////////////////////////

#include <iostream> 
#include "cambioBase.h" 
using namespace std;

//Ej principal
int main() {
  int n, b; // n = nro base 10, b = nueva base
  
  cout << "Ingrese numero base 10: ";
  cin >> n;          
  cout << "Ingrese nueva base [2,16]: ";
  cin >> b;

  int nuevo = cambioBase(n, b);
  
  return 0;
}