// POO - C++ kmy                                                      //
// guia 1 - ej 4 RECURSIVO                                            //
////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string.h>
using namespace std;

string filtrarComent(string frase){
  int inicio = 0;
  int fin = 0;
  int cont = 0;
  string nuevaFrase;
  for (int i = 0; i < frase.length(); i++){
    if (frase[i] == '('){
      inicio = i;
      cont++;
    }
    else if (frase[i] == ')' && inicio){  
      fin = i;
      nuevaFrase = frase.substr(0, inicio-1) + frase.substr(fin+1, frase.length()-fin);
      break;    
    }
  }
  if (cont > 1){
    nuevaFrase = filtrarComent(nuevaFrase);  
  }
  return nuevaFrase;
}

int main(){
  string frase = "Juan (mi mejor (mejor) amigo) llega hoy de viaje";
  string fraseFilt = filtrarComent(frase);
  cout << "Frase original: " << frase << "\n";
  cout << "Frase filtrada: " << fraseFilt << "\n";
  return 0;
}
