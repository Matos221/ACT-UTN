/* EJERCICIO: 8*/
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

main(){
      int n,suma =0;

      do {
      cout<<"Ingresar un valor n, luego calcular la sumatoria de los números naturales hasta n incluido y emitir su resultado, pero optimizado."<< endl;
      cout<< "Ingrese n: "; cin>> n ;
      } while (!(n>0));

      suma = n*(n+1)/2;

      cout<<"La respuesta es: "<<suma<<endl;
      getch();
      return 0;
}