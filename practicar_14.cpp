#include <iostream>
using namespace std;


int main(){

    int n_jugadores, puntaje, puntaje_max, segundo_puntaje_max;

    cout<<"digite la cantidad de jugadores: ";
    cin>>n_jugadores;

    for(int i=1; i<=n_jugadores; i++){

        cout<<"digite su puntuacion final: ";
        cin>>puntaje;

        if(i==1){
            puntaje_max = puntaje;
            continue;
        }
        if(i==2){
            if(puntaje_max>puntaje){
                segundo_puntaje_max = puntaje;
            }
            else{
                segundo_puntaje_max = puntaje_max;
                puntaje_max = puntaje;
            }
            continue;
        }

        if(puntaje>puntaje_max){
            segundo_puntaje_max = puntaje_max;
            puntaje_max = puntaje;
        }
        else if(puntaje>segundo_puntaje_max){
            segundo_puntaje_max = puntaje;
        }
    }

    cout<<"la puntuacion maxima fue: "<<puntaje_max<<endl;
    cout<<"la segunda puntacion maxima fue: "<<segundo_puntaje_max<<endl;
}