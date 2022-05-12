/*ACTIVIDAD 21*/
#include <iostream>
#include <math.h>
using namespace std;

//FUNCION BOOL POR DIVISION
int Divi(int x, int y){
      return bool( x % y==0); 
}


int main(){
      int a, b;

      cout<<" \nCrear una funcion que recibe como parametros dos valores enteros y retorne verdadero si el primero es divisible por el segundo, sino falso."<<endl;
      cout<<"\nIngrese los dos valores: ";cin>>a>>b; 

      cout<<"\nResultado booleano: " << Divi(a,b);
     // cout<<"\nDivi = "<<Divi(a,b)<<endl;
}