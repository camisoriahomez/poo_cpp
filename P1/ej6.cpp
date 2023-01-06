// POO - C++ kmy                                                      //
// guia 1 - ej 6                                                      //
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

int StrStr(char s1[], char s2[]){
  int j = 0;
  int n1 = len(s1);
  int n2 = len(s2);
  for (int i = 0; i < n1; i++){
    while (s1[i+j] == s2[j] && j < n2){
      cout << "coincidencia" << endl;
      cout << "s1: " << s1[i+j] << endl;
      cout << "s2: " << s2[j] << endl;
      j++;    
    }
    if (j == n2){
      return i;    
    }
  }  
  return -1;  
}


int main(){ 
  char s1[80], s2[80];
  cout << "Ingrese primer arreglo de caracteres: " << endl;
  cin >> s1;
  cout << "Ingrese segundo arreglo de caracteres: " << endl;
  cin >> s2;
  
  int pos = StrStr(s1, s2);
  cout << "Resultado: " << pos << endl;
  return 0;
}