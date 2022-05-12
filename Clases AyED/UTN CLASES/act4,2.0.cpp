/* EJERCICIO: 4*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
      float A, B, C, D, E, F, G, H, I;
      int triangulosmayores, contador1 = 0, i = 0;
      int triangulosmenores, contador2 = 0, j = 0;

      while (A>0 && B>0 && D>0 && E>0 && G>0 && H>0 );{
            /*PRIMER TRIANGULO*/
            cout<<"Insertar datos del primer triangulo: "<< endl;
            cout << "Cateto A: ";cin>>A; cout << "Cateto b: ";cin>>B;
            C = sqrt(pow(A,2)+ pow(B,2));
      
      if(C > 100)
            i++;
      else if (C <= 100)
            j++;
      
      
             /*SEGUNDO TRIANGULO*/
            cout<<"Insertar datos del segundo triangulo: "<< endl;
            cout << "Cateto D: ";cin>>D; cout << "Cateto E: ";cin>>E;
            F = sqrt(pow(D,2)+ pow(E,2));

      if(F > 100)
            i++;
      else if (F <= 100)
            j++;

              /*TERCER TRIANGULO*/
            cout<<"Insertar datos del tercer triangulo: "<< endl;
            cout << "Cateto G: ";cin>>G; cout << "Cateto H: ";cin>>H;
            I = sqrt(pow(G,2)+ pow(H,2));

      if(I > 100)
            i++;
      else if (I <= 100)
            j++;

      }
      cout<<"Los triangulos con porcentajes con hipotenusa mayor a 100 son:  "<< i <<endl; 
      cout<<"Los triangulos con porcentajes con hipotenusa menor o igual a 100 son:  "<< j <<endl; 
      cout<<"El promedio de las hipotenusas es: "<< (C+F+I)/3;

      return 0;
}