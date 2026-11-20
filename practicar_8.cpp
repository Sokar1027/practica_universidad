#include <iostream>
using namespace std;


int main(){

    int num,n_vueltas, n_primos=0;
    

    cout<<"digite la cantidad de numeros a analizar: ";
    cin>>n_vueltas;

    for(int i=1; i<=n_vueltas; i++){

        int divisores=0;
        cout<<"digite el numero a analizar: ";
        cin>>num;


        for(int j=1; j<=num; j++){
            if(num%j==0){
                divisores+=1;
                if(divisores>2){
                    break;
                }
            }
        }
        if(divisores==2){
            n_primos+=1;
        }
    }

    cout<<"la cantidad de primos en sus numeros digitados es: "<<n_primos;

}