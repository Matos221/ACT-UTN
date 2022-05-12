/*ACTIVIDAD 19*/
#include <iostream>
#include <math.h>
using namespace std;

//FUNCION SIGNO
short int sgn(int x){
      if(x==0)
      return 0;

      else 
      return x/abs(x);

      }
int main(){
      float a;   
      cout<<"Funcion que retorna el signo de x"<<endl;
      cout<<"\nIngrese el valor del entero: "; cin>>a;
      
      cout<<"sgn x:"<<sgn(a);

}