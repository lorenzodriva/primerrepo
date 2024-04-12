#include <iostream>
using namespace std;
//declarar variable diaIngresado como string
//declarar variable p/ convertir dia a valor num
//ingresarla por usuario
//condicional si es vierner o miercoles
//valor dia =1
//switch

int main (){

    int valordia = 0;
    string diaIngresado;
    cout<<"Ingrese el dia (minusculas): ";
    cin>>diaIngresado;
    if (diaIngresado == "viernes") {
        valordia = 1;
    } else if (diaIngresado == "miercoles") {
        valordia = 1;
    }

    switch(valordia){
    case 1:
        cout<<"Hoy tenes clase de programacion"<<endl;
        break;
    default:
        cout<<"Hoy no tenes clase de programacion"<<endl;
        break;
    }



    return 0;

}
