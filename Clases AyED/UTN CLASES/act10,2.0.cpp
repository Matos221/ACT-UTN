/*CLASE NUMERO 4 - 25/04 EJERCICIO 10 HECHO EN CLASE*/
#include <iostream>
using namespace std;

main(){
      int i , n;
      long anteult, ult, suma;

      cout<<"Hallar sucesion Fibonacci desde 0 hastan "<<endl;
      cout<<"Entero n:"; cin>>n;

      switch (n){  //SELECCION MULTIPLE, LO MISMO QUE EL IF PERO SOLO CON DATOS ORDINALES COMO "ENTEROS" "DATOS DADOS POR EL USUARIO"
      case 0:
            cout<<0<<endl;
            break;
      case 1:
            cout<<0<<","<<1;
            break;
      default:
            anteult=0;
            ult=1;
            cout<<anteult<<","<<ult<<",";
            break;

      for ( i = 2; i <=n; i++) {
            suma= ult +anteult;
            anteult=ult;
            ult=suma;
            cout<<suma<<",";
      }
      
}

      return 0;
}