#include <iostream> 
#include <math.h> 

using namespace std;

int fn(int N){
  
  if (N < 0){
    cout<<"N debe ser mayor que 0";
    return -99999999;
  
  }
  else if (N == 0){
    return 0;
  
  }
  else if (N == 1){
    return 1;
  
  }
  else if (N == 2){
    return 2;
  
  }
  else{
    return (fn(N-1)+fn(N-2));
  }
}

int main(){
  int N;
  
  cout << "Ingrese primer numero N: " << endl;
  cin >> N;

  cout<<fn(N)<< endl;


  cout<<"  "<< endl;
  
  return 0;
}