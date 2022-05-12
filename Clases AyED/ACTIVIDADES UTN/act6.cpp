/* EJERCICIO: 6*/
#include <iostream>
#include <math.h>
using namespace std;

main() {
      short n;
      long fact;
      long  e=1;
      
      cout << "Hallar el numero irracional e" << endl;
      cout << "Entero n: ";
      cin >> n;

      for (short i = 1; i <= n; i++) {
            fact *=i;
      
       for (short j = i; j <= n; j--) 
            fact *=j;
            e += 1.0 / fact;
      }
      cout << "e~=" << e;
      return 0;
}