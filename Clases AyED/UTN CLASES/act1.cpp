/* CLASE NUMERO 2 EJERCICIO 1 */
#include <iostream>
#include <math.h>
using namespace std;

main(){
    float   a,
            b,
            c;
    cout << "Calcular hipotenusa con datos de catetos a y b" << endl;
    cout << "Cateto a: ";
    cin >> a;

    cout << "Cateto b: ";
    cin >> b;
      c = sqrt(pow(a,2)+ pow(b,2));
    cout << "Hipotenusa: " << c;
    return 0;

}
