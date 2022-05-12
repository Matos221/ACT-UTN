/*ACTIVIDAD 23*/
#include <iostream>
#include <math.h>

using namespace std;

//MARCAMOS EL MAX Y MIN
const unsigned short VALMAX = 1001, VALMIN = 0;
typedef unsigned unsigned short minVal, maxVal,N, x,y,z;
//PROTOTIPOS DE FUNC

//FUNC mostrar los titulos
void MostTit(unsigned short &minVal, unsigned short &maxVal){
      cout<<"\nTernas de valores enteros ordenar descendente."<<" \nY al finalizar el proceso se deberá emitir el MIN y MAX."<<endl;
      minVal = VALMAX;
      maxVal = VALMIN;

}

// FUNC obtener datos
unsigned short ObtDato(unsigned short &N){
      unsigned short N;
      cout<<"\nIngrese la cantidad N de ternas: "<<endl;
      return N;
      
}

//FUNC obtener la terna
void ObtTerna(unsigned short &x, unsigned short &y, unsigned short &z){
      unsigned short x, y,z;
      cout<<"\nIngrese 3 valores:"<<endl;
      cout<<"Entero 1: " ;cin>>x;
      cout<<"Entero 2: " ;cin>>y;
      cout<<"Entero 3: " ;cin>>z;
}
//FUNC intercambiar terna
void Interc(unsigned short &num1,unsigned short &num2 ){
      unsigned short aux1;
      aux1 = num1;
      num1 = num2;
      num2 = aux1;
}

// FUNC ordenar la terna
void OrdTerna(unsigned short &x, unsigned short &y, unsigned short &z){
      if (y>x) Interc(x,y);
      if (z>x) Interc(x,z);
      if (z>y) Interc(y,z);
}

//FUNC  verificar min y max
void VeriMinMax(unsigned short &a, unsigned short &c, unsigned short &minVal, unsigned short &maxVal){
      if(a > maxVal){
            maxVal = a;}

      if(c < minVal){
            minVal = c;}
}




main(){
      unsigned short a,b,c,MaxVal,MinVal, nTernas, i;
      MostTit(MaxVal,MinVal);

      ObtDato(nTernas);
      for (i = 0; i <= nTernas; i++){
            ObtTerna(a,b,c);
            OrdTerna(a,b,c);
            VeriMinMax(a,c,MinVal,MaxVal);
      }
     
 return 0;
}