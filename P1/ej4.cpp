// POO - C++ kmy                                                      //
// guia 1 - ej 4                                                      //
////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

string filtrarComent(string frase){
  string coment = "";
  string nuevaFrase = "";
  bool flagCommentON = false;
  bool flagAnidado = false;
  for (int i = 0; i < frase.length(); i++){
    if (frase[i] == '(' && !flagCommentON){
      flagCommentON = true;        
    } 
    else if (frase[i-1] == ')' && flagCommentON && !flagAnidado){
      flagCommentON = false;      
    }
    if (flagCommentON){
      coment += frase.at(i);
      if (frase[i] == '(' && !flagAnidado){
        flagAnidado = true;
      }
      if (frase[i-1] == ')' && flagAnidado){
        flagAnidado = false;
      }
    }
    else if (!flagCommentON && !flagAnidado){
      nuevaFrase += frase.at(i);
    }
  }
  return nuevaFrase;
}

int main(){
  string frase = "Juan (mi mejor mejor) amigo) llega hoy de viaje";
  string fraseFilt = filtrarComent(frase);
  cout << "Frase original: " << frase << "\n";
  cout << "Frase filtrada: " << fraseFilt << "\n";
  return 0;
}
