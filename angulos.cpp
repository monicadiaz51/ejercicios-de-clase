#include <iostream>
using namespace std;

int main(){
    float angulo1 = 0.00;
    float angulo2 = 0.00;
    float respuesta = 0.00;

    cout<<"programa para calcular el tercer angulo de un triangulo \n";
    cout<<"ingrese el primer angulo \n";
    cin>>angulo1;
    cout<<"ingrese el segundo angulo \n";
    cin>> angulo2;

    respuesta = 180 - angulo1 -angulo2;


    cout<<"el valor del tercer angulo es \n"<<respuesta;
    

    return 0;

 
}


