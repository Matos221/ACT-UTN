/*ACTIVIDAD 22*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <conio.h>
using namespace std;

//PROTOTIPOS DE FUNC

#define CENTINELA "TERMINAR"
//const int MIN = 12, MAX = 18;
typedef unsigned short total_correct, total_incorrect, ent1, ent2, x, y, z, pAlu, pMaq;
typedef char str20[21];

//FUNC mostrar titulos
void MostTit(short &total_correct, short &total_incorrect){
      cout<<"\nAl finalizar el proceso se deberá emitir cantidad de respuestas correctas e incorrectas."<< endl;
      total_correct = 0 , total_incorrect = 0;
      //randomize();
}
//FUNC obtener nombre del alumno
void ObtNomAlu(str20 nomalu){
      fflush(stdin);
      cout<<"\nIngrese el nombre del alumno o TERMINAR para finalizar la evaluacion"<<endl;cin>>nomalu;
}

//FUNC iif
short iff(bool expLog, short ent1, short ent2){
      if(expLog)
       return ent1;
      else
       return ent2;

}
//FUNC obtener lados
void Obtlados(short &x, short &y, short &z){
      do{
      x = rand() % 50;
      y = rand() % 50;
      //mini = iif(abs(x - y) <= ,MIN,abs(x - y) + 1);
      //maxi = iif(x + y >= MAX, MAX,x+y-1);
      z = rand() % 50;
      } while (x>y+z || y>x+z || z>x+y);

}
//FUNC respuestas alumnos
void Respalu(short x, short y, short z, short &pAlu, char &tAlu){
      cout<<"\nDados los lados de un triangulo con medidas: "<<x <<","<<y<<","<<z;
      cout << "\nResponder su perimetro y "<< "tipo de triangulo (Isos, Escal, Equil)" << endl;
      cout << "Perimetro: ";cin >> pAlu;

      do {
      cout<<"Tipo de triangulo (I,E,Q):";cin>>tAlu;
      }
      while (!(strcmp(&tAlu, "I") || strcmp(&tAlu, "E") || strcmp(&tAlu, "Q")));
}

//FUNC respuestas maquina
void Respmaq(short x, short y, short z, short &pMaq, char &tMaq){
      pMaq = x+y+z;
      if( x==y && y==z)
            tMaq = 'Q';
      else if(x==y || x==z || y==z)
            tMaq = 'I';
      else
            tMaq = 'E';
}

//FUNC verificacion/calculo/emicion
void VeCaEmi(str20 nomalu, short pAlu,short pMaq,char tAlu, char tMaq, short &total_correct, short &total_incorrect ){
      char Cartel[11];
      if(pAlu == pMaq && tAlu == tMaq) {
        total_correct++;
        strcpy(Cartel,"O.K.");
      }
      else {
            total_incorrect++;
            strcpy(Cartel,"ESTUDIE MAS INEPTO");
      }
      cout<<nomalu<<" "<<Cartel<<endl;
}

//FUNC emite total
void Emitetotal(short total_correct, short total_incorrect){
      cout<<"Cantidad de respuestas correctas: "<<total_correct<<endl;
      cout<<"Cantidad de respuestas incorrectas: "<<total_incorrect;
}

main (){
       short totRespCor, totRespIncor, a, b, c, perAlu, perMaq;
       str20 NomAlu;
       char triAlu, triMaq;
      MostTit(totRespCor,totRespIncor);

      ObtNomAlu(NomAlu);
      while (strcmp(NomAlu,CENTINELA)){
            fflush(stdin);
            Obtlados(a,b,c);
            Respalu(a,b,c,perAlu,triAlu);
            Respmaq(a,b,c,perMaq,triMaq);
            VeCaEmi(NomAlu,perAlu,perMaq,triAlu,triMaq,totRespCor,totRespIncor);
            ObtNomAlu(NomAlu);
      };

      Emitetotal(totRespCor,totRespIncor);

      getch();
      return 0;
}

