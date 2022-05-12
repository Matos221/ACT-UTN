/*ACTIVIDAD 20*/
#include <iostream>
#include <math.h>
using namespace std;

// int a;
// int b;
// div_t resultado;

//FUNCION QUE DA EL RESTO
int resto(int x, int y){
      return x-x/y*y; 

}

int main(){
      int a=0, b=0;

      cout<<"\nCrear una funcion que recibe como parametros dos valores enteros y retorne el resto de la division entera."<<endl;

      cout<<"\nIngrese el primer valor entero: ";cin>>a;
      cout<<"\nIngrese el segundo valor entero: ";cin>>b;

      // resultado = div(a,b);

      cout<<"\nEl resto de la division es: "<<resto(a,b)<<endl;
      return 0;
}