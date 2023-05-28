#include <iostream>

using namespace std;

int main() {
  int option=0;
  cout<<"introduce la opcion ";
  cin>>option;
  switch (option){
  case 1:
  cout<<"opcion 1; hablar con asesor";
  break;
  case 2:
  cout<<"opcion 2";
  break; 
  default:
  cout<<"esto no existe";
    break;
  }

}