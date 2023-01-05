// POO - C++ kmy                                                      //
// guia 1 - ej 3                                                      //
////////////////////////////////////////////////////////////////////////
#include <math.h> 
#include <iostream> 
using namespace std;
// Funciones
int hallarMaxPot(int n, int b){
  int exp = 0;
  double aux = pow(b, exp); 
  while (aux < n){
    //cout << "\nDEBUG: " << aux; 
    exp++;
    aux = pow(b, exp);
  }
  return exp-1;
}

int aNuevaBase(int n, int b, int maxExp){
  string aux = "";
  int dividendo = n;
  int exp = maxExp;
  int resto, digito;
  while (exp >= 0){
    if (dividendo != 0){ 
      resto = dividendo % int(pow(b, exp));
      //cout << "Resto: " << resto;
      digito = dividendo / int(pow(b, exp));
      //cout << "Digito " << digito;  
      aux = aux + to_string(digito);
      dividendo = resto;
      exp--;
    }
    else {
      resto = 0;
      digito = 0;
      aux = aux + to_string(digito);
      dividendo = -1;
    }
  }
  return stoi(aux);
}

int cambioBase(int n, int b){
  int exp = hallarMaxPot(n, b);
  int aux = aNuevaBase(n, b, exp);
  return aux;
}