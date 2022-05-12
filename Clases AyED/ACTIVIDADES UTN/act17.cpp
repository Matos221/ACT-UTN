/*ACTIVIDAD 17*/
#include <iostream>
#include <math.h>
using namespace std;

//PROTOTIPOS DE LAS FUNC

int comparasion( int ent1, int ent2){
      if (ent1>ent2)
       return ent1;

      else 
       return ent2;
}

int main(){
      int num1, num2;
      
      cout<<"\nFuncion que retorna un entero u otro segun el resultado del BOOLEANO"<<endl;

      cout<<"\nIngrese los dos valores enteros: ";cin>>num1>>num2;

      cout<<comparasion(num1,num2);
      return 0;
}

