/* EJERCICIO:*/

#include <iostream>
#include <math.h>
using namespace std;

main(){
      cout <<"Cacular la superficie de un cuadrado, el cual tiene a la hipotenusa como uno de sus lados. " << endl;
      float  a,
             b,
             c,
             sup;
      cout << "Primero averiguamos la hipotenusa con datos de catetos a y b" << endl;
      cout << "Cateto a: ";
      cin >> a;

      cout << "Cateto b: ";
      cin >> b;

      c = sqrt(pow(a,2)+ pow(b,2));

      if (c > 100)
      {
            cout << "La superficie del cuadrado es: " << pow(c,2) << endl;
      }
      else{
            cout <<"La superficie del cuadrado es: "<< (sup = (2*c));

      }

      return 0;
}


