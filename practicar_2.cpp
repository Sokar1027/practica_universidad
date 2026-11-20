#include <iostream>
#include <cmath>
using namespace std;

 float calcular_potencia(float valor1, float valor2);
 void imprimirPotencia(int potencia, float num1, float num2);

 int main(){

    float x, y;
    int potencia;

    cout<<"digite x: ";
    cin>>x;
    cout<<"digite y: ";
    cin>>y;

    potencia = calcular_potencia(x, y);

    imprimirPotencia(potencia, x, y);




 }

 float calcular_potencia(float valor1, float valor2){
    int resultado;
    resultado = pow(valor1, valor2);

    return resultado;
 };

 void imprimirPotencia(int potencia, float num1, float num2){
    cout<<"el valor de "<<num1<<" elevado a la "<<num2<<" es: "<<potencia;
 }


