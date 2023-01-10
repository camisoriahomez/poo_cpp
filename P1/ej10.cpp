// POO - C++ kmy                                                      //
// guia 1 - ej 10                                                     //
////////////////////////////////////////////////////////////////////////
#include <iostream> 
#include <math.h> 
using namespace std;

struct Complejo{
  double real, imag;
  void ingresar(){
    cout << "Ingrese la parte real: " << endl;
    cin >> real;
    cout << "Ingrese la parte imaginaria: " << endl;
    cin >> imag;
  }    
  void imprimir(){
    cout << real << " + (" << imag << ")i" <<endl;
  }
};

double mod(Complejo c1){
  return sqrt(c1.real*c1.real + c1.imag*c1.imag); 
}

struct Complejo sumar(Complejo c1, Complejo c2){
  struct Complejo c3;
  c3.real = c2.real + c1.real;
  c3.imag = c2.imag + c1.imag;
  return c3; 
}

struct Complejo restar(Complejo c1, Complejo c2){
  struct Complejo aux, c3;
  aux.real = -c2.real;
  aux.imag = -c2.imag;
  c3 = sumar(c1, aux);
  return c3; 
}

struct Complejo mult(Complejo c1, Complejo c2){
  Complejo c3;
  c3.real = c1.real*c2.real - c1.imag*c2.imag;
  c3.imag = c1.imag*c2.real + c1.real*c2.imag;
  return c3; 
}

struct Complejo div(Complejo c1, Complejo c2){
  Complejo c3;
  double c2_den = mod(c2)*mod(c2);
  c3.real = (c1.real*c2.real + c1.imag*c2.imag)/c2_den;
  c3.imag = (c1.imag*c2.real - c1.real*c2.imag)/c2_den;   
  return c3; 
}

int main() {
  struct Complejo c1, c2, c3;
  c1.ingresar();
  c1.imprimir();

  c2.ingresar();
  c2.imprimir();

  c3 = mult(c1, c2);
  c3.imprimir();
  return 0;
}