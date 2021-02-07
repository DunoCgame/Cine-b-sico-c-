
#include<iostream>
#include <windows.h>
 #include <conio.h>
 #include <stdlib.h>
    #include <stdio.h>






using namespace::std;
int backcolor=0;  ////// vriable para el color

char op1;

int cons,o;



 void setCColor(int color)                          ///////////////////////funcion para el color
    {
            static HANDLE hConsole;

            hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

            SetConsoleTextAttribute( hConsole, color | (backcolor * 0x10 + 0x100) );

     }
      int color[7] = {
          0x001,/// 1...AMARILLO
          0x00E,/// 2...verde OScuro
          0x002,/// 3...CELESTE
          0x00B,/// 4...MORADO
          0x005,/// 5...BLANCO
          0x00F,/// 6...NEGRO

         };////////////////////////funcion para el color


int costamol(){
     do{
        setCColor(color[5]);
cout<<                            "Obciones de peliculas Costa Mall"<<endl;
setCColor(color[1]);
cout<<"a-Comedia"<<endl;
setCColor(color[2]);
cout<<"b-Terror"<<endl;
setCColor(color[3]);
cout<<"c-Accion"<<endl;
setCColor(color[5]);
cin>>op1;

  switch(op1){

  case'a':
setCColor(color[1]);
    cout<<"                       Comedia"<<endl;

     cout<<"1-Todo publico"<<endl;

     cout<<"2-Mayores de edad"<<endl;

     cin>>cons;

     if(cons==1){

     cout<<"Todo publico"<<endl;

     cout<<"La mujer de mis pesadillas--a las 3:45pm"<<endl;

     cout<<""<<endl;

     cout<<"El perro y el gato--a las 6:00pm"<<endl;

     }

     if(cons==2){

     cout<<"Mayores de edad"<<endl;

    cout<<"Lo que paso la otra noche!!--a las 3:45pm"<<endl;

     cout<<""<<endl;

     cout<<"Amigos con beneficios--a las 6:00pm"<<endl;

     }

break;

  case'b':
setCColor(color[2]);
     cout<<"                        Terror"<<endl;

     cout<<"1-Mayores de edad"<<endl;

     cin>>cons;

     if(cons==1){

     cout<<"Mayores de edad"<<endl;

     cout<<"Martes 13--a las 8:00pm"<<endl;

     cout<<""<<endl;

     cout<<"La avenida 23--a las 5:50pm"<<endl;

     }

break;

  case'c':
setCColor(color[3]);
     cout<<"                        Accion"<<endl;

     cout<<"1-Todo publico"<<endl;

     cout<<"2-Mayores de edad"<<endl;

     cin>>cons;

     if(cons==1){

    cout<<"Todo publico"<<endl;

     cout<<"oblivion--a las 12:30pm"<<endl;

     cout<<""<<endl;

     cout<<"Desafio al tiempo--a las 3:40pm"<<endl;

     }


     if(cons==2){

     cout<<"Mayores de edad"<<endl;

     cout<<"Rescatando al soldado Ryan--a las 5:30pm"<<endl;

     }

break;

default:
setCColor(color[4]);
cout<<"No es valido"<<endl;

}//cierre del switch

  cout<<"Salir     1"<<endl;

  cout<<"continuar 2"<<endl;

  cin>>o;

     }//cierre del do

     while(o==2);

}///cierre de la funcion



int main(){
    costamol();




system("pause");








    return EXIT_SUCCESS;
}
