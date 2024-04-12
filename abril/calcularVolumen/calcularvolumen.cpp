#include <iostream>;
using namespace std;

//declaramos variables, base, altura, profundidad y volumen
//pedimos que ingresen los valores de las variables
//hacemos el calculo de volumen
//mostramos los valores

int main(){
    float volumenDelCuerpo;
    float baseDelCuerpo;
    float alturaDelCuerpo;
    float profundidadDelCuerpo;

    cout<<"Ingrese base: ";
    cin>>baseDelCuerpo;
    cout<<"Ingrese altura: ";
    cin>>alturaDelCuerpo;
    cout<<"Ingrese profundidad: ";
    cin>>profundidadDelCuerpo;

    volumenDelCuerpo = baseDelCuerpo * alturaDelCuerpo * profundidadDelCuerpo;

    cout<<"El volumen es igual a: " <<volumenDelCuerpo <<" cm3.";



return 0;
}
