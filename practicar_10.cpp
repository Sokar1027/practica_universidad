#include <iostream>
using namespace std;

int main(){

    int n_numeros,num, digito, sum_digitos,sum_max, num_max, num_original;

    cout<<"digite la cantidad de numeros a analizar: ";
    cin>>n_numeros;

    for(int i=1; i<=n_numeros; i++){

        sum_digitos=0;
        cout<<"digite el numero a analizar: ";
        cin>>num;
        num_original = num;
        do{
            digito = num % 10;
            sum_digitos+=digito;
            num = num/10;


        }while(num!=0);

        if(i==1){
            num_max = num_original;
            sum_max = sum_digitos;
        }

        if(sum_digitos>sum_max){
            num_max = num_original;
            sum_max = sum_digitos;
        }
    }

    cout<<"el numero con mayor suma de digitos fue: "<<num_max;

}