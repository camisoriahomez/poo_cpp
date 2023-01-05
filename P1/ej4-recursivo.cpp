// POO - C++ kmy                                                      //
// guia 1 - ej 4 RECURSIVO                                            //
////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string.h>
using namespace std;

string filtrarComent(string frase){
  string inicio = 0;
  string fin = 0;
  for (int i = 0; i < frase.length(); i++){
    if (frase[i] == '('){
      inicio = i;
    }
    else if (frase[i] == ')' && inicio){
      fin = i;    
    }
  }
  string nuevaFrase = frase.substr(0, inicio-1) + frase.substr(fin, frase.length()-fin);
  return nuevaFrase;
}

int main(){
  string frase = "Juan (mi mejor mejor) amigo) llega hoy de viaje";
  string fraseFilt = filtrarComent(frase);
  cout << "Frase original: " << frase << "\n";
  cout << "Frase filtrada: " << fraseFilt << "\n";
  return 0;
}
