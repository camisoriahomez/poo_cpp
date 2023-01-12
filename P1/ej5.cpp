// POO - C++ kmy                                                      //
// guia 1 - ej 5                                                      //
////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <math.h> 
using namespace std;

//retorna la cantidad de bits en 1 presentes en value
int numOnes(int value){
  int ones[8];
  int exp = 8;
  int aux = value;
  while (exp >= 0){
    //cout << "DEBUG: valor=" << aux << " exp: " << pow(2,exp) << endl;
    if (aux > pow(2, exp)){
      cont++;
      aux = aux % int(pow(2, exp));
    }
    exp--;
  }
  return cont;
}

int setBit(int value, int bit){

}


int main(){
  int value, bit;
  cout << "Ingrese valor... " << endl;
  cin >> value;
  cout << "Ingrese bit a setear en 1 (1-8): " << endl;
  cin << bit;

  int cantUnos = numOnes(value);
  cout << "Cantidad de 1: " << cantUnos << endl;    
}