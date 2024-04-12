#include <iostream>;
using namespace std;

//declarar variables peso, altura e imc como float
//ingresar los valores para p y a
//hacer el calculo de imc
//mostrar el imc

int main(){

    float pesoDelCuerpo ;
    float alturaDelCuerpo;
    float imc;

    cout<<"Ingrese su peso en kg: ";
    cin>>pesoDelCuerpo;

    cout<<"ingrese su altura en m: ";
    cin>>alturaDelCuerpo;

    imc = pesoDelCuerpo / (alturaDelCuerpo * alturaDelCuerpo);
    cout<<"Su indice de masa corporal es: "<<imc <<endl;



    if(imc < 18.5){
        cout<<"Tenes bajo peso.";
    }else if(imc >= 18.5 && imc <= 25){
        cout<<"Su peso es saludable";
    }else{
        cout<<"Usted tiene sobrepeso";
    }

return 0;
}
