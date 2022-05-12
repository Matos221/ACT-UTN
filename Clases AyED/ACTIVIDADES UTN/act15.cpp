/* EJERCICIO: 15  HECHO EN CLASE*/
#include <iostream>
using namespace std;

main(){
      int i, 
      sum, 
      num = 0, 
      k = 0;

      cout<<"Generar los 4 primeros numero perfectos"<<endl;

      while (k <4 ) {
            num+= 2;
            sum =1;

            for ( i = 2; i <= num/2; i++)
                  if(num % i==0)
                  sum+=i;

                  if(num==sum){
                   k++;

                  cout<< k <<": "<< num <<endl;
                   
                  }
            } 
      return 0;
}

