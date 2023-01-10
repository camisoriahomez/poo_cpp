// POO - C++ kmy                                                      //
// guia 1 - ej 7                                                      //
////////////////////////////////////////////////////////////////////////
#include <iostream> 
#include <math.h> 
using namespace std;

int len(char s[]){
  int i = 0;
  while (s[i]){
    i++;
  }
  return i;
}

int len_space(char s[]){
  int i = 0;
  while (s[i] == ' '){
    i++;
  }
  return i;
}

void leftTrim(char phrase[]){
  int n = len(phrase);
  int n_s = len_space(phrase);
  cout << n_s << endl;
  for (int i = 0; i < n; i++){
    phrase[i] = phrase[i+n_s];
  }
}

int main(){
  char frase[100];
  cout << "Ingrese una frase: " << endl;
  cin.getline(frase, 99);
  leftTrim(frase);
  cout << "Frase modificada:" << frase << endl;
  return 0;
}