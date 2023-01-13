// POO - C++ kmy                                                      //
// guia 1 - ej 5                                                      //
////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <math.h> 
using namespace std;

//retorna la cantidad de bits en 1 presentes en value
int numOnes(int value){
  int cont = 0;
  int exp = sizeof(value)*8;
  while (exp >= 0){
    if (value & int(pow(2,exp))) cont++;
    exp--;
  }
  return cont;
}

int setBit(int value, int bit){
  int num = int(pow(2,bit));
  return value | num;
}

int resetBit(int value, int bit){
  int num = int(pow(2,bit));
  return value & ~num;
}

bool testBit(int value, int bit){
  int num = int(pow(2,bit));
  return value & num;
}

int main(){
  int value, bit;
  cout << "Ingrese valor... " << endl;
  cin >> value;
  cout << "Ingrese bit a setear en 1: " << endl;
  cin >> bit;

  //int cantUnos = numOnes(value);
  //cout << "Cantidad de 1: " << cantUnos << endl;   

  int seteado = setBit(value, bit);
  cout << "Numero original: " << value << ". Numero con bit seteado: " << seteado << endl; 

  int reseteado = resetBit(value, bit);
  cout << "Numero original: " << value << ". Numero con bit seteado: " << reseteado << endl;

  cout << "Numero original: " << value << ". Status del bit: " << testBit(value, bit) << endl;
}