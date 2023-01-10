// POO - C++ kmy                                                      //
// guia 1 - ej 9                                                      //
////////////////////////////////////////////////////////////////////////
#include <iostream> 
#include <math.h> 

using namespace std;

int combinaciones(int N){
  if (N==1){
    return 1;
  }
  else if (N==2){
    return 2;
  }
  else {
    return combinaciones(N-1) + combinaciones(N-2);
  }
}

int main(){
  int N;
  
  cout << "Ingrese N: " << endl;
  cin >> N;

  int comb = combinaciones(N);
  cout << "Combinaciones posibles: " << comb << endl;
  
  return 0;
}