#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero,valor,digito, inverso=0, division, suma_inverso;
    string capicua="No";

    cout<<"digite el numero que quiere convertir: "<<endl;
    cin>>numero;


    valor=numero;


    do{
        digito = valor%10;
        division = valor/10;
        
        inverso = inverso * 10 + digito ;
        valor = division;
    }
    while(valor!=0);

    if(numero==inverso){
        capicua="Si";
    }

    cout<<"su numero es capicua? "<<capicua<<endl<<inverso;
}