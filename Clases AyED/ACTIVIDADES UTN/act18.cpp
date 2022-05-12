/*ACTIVIDAD 18*/
#include <iostream>
#include <math.h>
using namespace std;

int mcd(int x, int y){
      int res=1;


while (y!=0){
      res = x % y;
      x = y;
      y = res;
      }

      return x;
}//M.C.D

int main(){
      int a=0, b=0, maxComDiv=0;

      cout<<"\nFuncion que recibe dos valores enteros y retorne el M.C.D."<<endl;

      cout<<"\nIngrese el primer valor entero: "; cin>>a;
      cout<<"\nIngrese el segundo valor entero: "; cin>>b;

      maxComDiv = mcd(a,b);
      cout<<"M.C.D: "<<maxComDiv<<endl;

      return 0;
}