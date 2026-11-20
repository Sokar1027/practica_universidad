#include <iostream>
using namespace std;


int main(){

    int num,n_pares=0,n_impares=0, digito, division,valor;
    bool equilibrado=false;

    cout<<"digite su numero: ";
    cin>>num;

    valor=num;


    do{
        if(num==0){
        cout<<"digite un numero valido";
        break;}
    
        digito = valor % 10;
        division = valor / 10;
        valor = division;

        if(digito%2==0){
            n_pares+=1;
        }
        else{
            n_impares+=1;
        }
    }while(valor!=0);

    if((n_impares != 0)||(n_pares!=0)){  
        if(n_impares==n_pares){
            cout<<"su numero esta equilibrado";
        }else{
            cout<<"su numero no esta equilibrado";
        }
    }
}

