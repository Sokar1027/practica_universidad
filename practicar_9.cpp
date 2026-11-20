#include <iostream>
using namespace std;

int main(){

    int opcion;
    bool salir=false;



    do{
    cout<<"digite la opcion de menu que quiere: ";
    cin>>opcion;

    switch(opcion){

        case 1:{
            cout<<"su opcion de menu fue comida";
            salir=true;
            break;
        }
        case 2: {
            cout<<"su opcion de menu fue bebidas";
            salir=true;
            break;
        } 
        case 3: {
            cout<<"su opcion de menu fue postres";
            salir=true;
            break;
        }
        case 4: {
            cout<<"su opcion fue salir";
            salir=true;
            break;
        }
        default: {
            cout<<"digite una opcion valida de 1 a 4"<<endl;;
        }
    } }while(salir!=true);
}