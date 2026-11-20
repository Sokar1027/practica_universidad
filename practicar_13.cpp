#include <iostream>
using namespace std;

int main(){

    int n_num=6,num, numeros[n_num]={}, numero_max, numero_dos_max;

    cout<<"digite los numeros para rellenar el arreglo: ";

    for(int i=0; i<n_num; i++){

        cin>>num;
        numeros[i] = num;

    }

    for(int i=2; i<n_num;i++){
        if(i==2){
            if(numeros[0]>numeros[1]){
            numero_max = numeros[0];
            numero_dos_max = numeros[1];}
            else{
                numero_max = numeros[1];
                numero_dos_max = numeros[0];
            }

        }

        if(numeros[i]>numero_max){
        numero_dos_max = numero_max;
        numero_max = numeros[i];
        }
        else if(numeros[i]>numero_dos_max){
            numero_dos_max = numeros[i];
        }
    }
    cout<<numero_dos_max;
}