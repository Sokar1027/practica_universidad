#include <iostream>
using namespace std;

int main(){

    int num, longitud=1, anterior,n_vueltas=1, racha_max=1;
    cout<<"digite numero a numero su secuencia de enteros: "<<endl;

    do{

        cin>>num;

        if(num==0){
            break;
        }

        if(n_vueltas==1){
            anterior=num;
            n_vueltas+=1;
        }

        if(num>anterior){
            longitud += 1;
            anterior = num;
            if(longitud>racha_max){
                racha_max=longitud;
            }
        }
        else if((num<anterior)||(num==anterior)){
            longitud=1;
            anterior=num;
        }

    }
    while(num !=0);

    cout<<"la racha maxima fue de la siguiente cantidad de digitos: "<<racha_max;
}

