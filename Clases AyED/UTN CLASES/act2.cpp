/* CLASE NUMERO 2 EJERCICIO 2 */
#include <iostream>
using namespace std;

main(){
      int a,
          b;
      cout << "Mostrar cartel que informe el mayor entre 2 enteros distintos"<< endl;
      cout <<"Entero a: ";
      cin >> a;

      do {
            cout << "Entero b: ";
            cin >> b;
      }
      while (a == b);

      if(a > b)
      cout << "a > b";
      
      else 
      cout <<"b > a";
      return 0;
}  