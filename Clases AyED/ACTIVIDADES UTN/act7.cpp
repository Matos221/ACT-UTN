/* EJERCICIO: 7*/
#include <iostream>
#include <math.h>
using namespace std;

main() {
      short n;
      unsigned long fact=1;
      long double e=1;
      
      cout << "Hallar el numero irracional e" << endl;
      cout << "Entero n: ";
      cin >> n;

      for (short i = 1; i <= n; i++) {
            fact *=i;
            e += 1.0 / fact;
      }
      cout << "e~=" << e;
      return 0;
}