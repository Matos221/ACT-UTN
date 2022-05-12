/* EJERCICIO: 4*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
      float A=0, B=0, C=0;
      int triangulosmayores, contador1 = 0, i = 0;
      int triangulosmenores, contador2 = 0, j = 0;

      do {
            cout<<"\nIngrese los valores de los catetos A y B: "<<endl;cin>>A>>B;
              C = sqrt(pow(A,2)+ pow(B,2));
            if(C > 100)
                  i++;
            else if (C <= 100)
                  j++;

      } while (A>0 && B>0);
      

      cout<<"\nLos triangulos con porcentajes con hipotenusa mayor a 100 son:  "<< i <<endl;
      cout<<"\nLos triangulos con porcentajes con hipotenusa menor o igual a 100 son:  "<< j <<endl;
      cout<<"\nEl promedio de las hipotenusas es: "<< (C/3);

      return 0;
}
