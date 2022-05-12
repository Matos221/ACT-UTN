/* EJERCICIO: 8*/
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

main(){
      int n,suma =0;
      
      do{ 
      cout<<"Ingresar un valor n, luego calcular la sumatoria de los numeros naturales hasta n incluido y emitir su resultado."<< endl;
      cout<< "Ingrese n: "; cin>> n ;

      }while (n<= 0);
      
      for (int i=1; i<=n; i++){

            suma +=i; /*1+2+3+...+n*/
      }
      cout<<"Sumatoria desde 1 hasta : "<<n<<" = "<<suma<<endl;
      getch();
      return 0;
}
