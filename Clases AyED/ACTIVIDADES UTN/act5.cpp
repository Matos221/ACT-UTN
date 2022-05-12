/* EJERCICIO: 5*/

#include <iostream>
#include <math.h>
using namespace std;

main(){
      float a, b, c;
      
      do
      {
            cout << "ingrese el valor a: "<< endl; cin>>a;
            cout << "ingrese el valor b: "<< endl; cin>>b;

      } while (a<0 || b<0);

      c = pow(a,b);

      cout<<"El resultado es: "<< c << endl;

      cout<<" "<<endl;

      if (a==0)
      {
            cout<< "B es mayor a 0";
      }
      else if (b==0)
      {
            cout<<"A es mayor a 0";
      }
      return 0;
}