/* EJERCICIO: 10 MIRAR LO QUE CAMBIAMOS EN CLASE*/
#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
      int n, x=0, y=1, z=1;

      cout<<"Dado un valor n, entero positivo incluido el cero, obtener cada uno de los términos de la sucesión de Fibonacci."<<endl;
      cout<<"Valor n: "; cin>>n;

      cout<<"1 ";
      for (int i = 1; i < n; i++) {
            z = x+ y;
            cout<<z<<" ";
            x = y;
            y = z;
      }

      system("pause");
      return 0;
}
