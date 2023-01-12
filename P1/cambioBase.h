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

char mapeo(int n){
  char letra = 'z';
  if (n == 10) letra = 'A';
  else if (n == 11) letra = 'B';
  else if (n == 12) letra = 'C';
  else if (n == 13) letra = 'D';
  else if (n == 14) letra = 'E';
  else if (n == 15) letra = 'F';
  else if (n == 16) letra = 'G';
  else{
    cout << "Error en el mapeo." << endl;
  }
  return letra;
}

void aNuevaBase(int n, int b, int maxExp){
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
      if (digito < 10){
        aux += to_string(digito);
      }
      else if (digito >= 10){
        aux += mapeo(digito);
      }
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
  cout << "Numero en nueva base: " << aux << endl;
}

int cambioBase(int n, int b){
  int exp = hallarMaxPot(n, b);
  aNuevaBase(n, b, exp);
  return 0;
}