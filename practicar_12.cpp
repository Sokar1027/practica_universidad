#include <iostream>
using namespace std;

int main(){

    int n_votos, option, suma_votos_1=0, suma_votos_2=0, suma_votos_3=0;


    cout<<"digite la cantidad de votos a registrar: ";
    cin>>n_votos;

    for(int i=1; i<=n_votos; i++){
        bool bucle=false;
        do{
        cout<<"digite el voto para su candidato de preferencia: ";
        cin>>option;

        switch(option){

            case 1:{
                suma_votos_1+=1;
                bucle=true;
                break;
            }
            case 2:{
                suma_votos_2+=1;
                bucle=true;
                break;
            }
            case 3:{
                suma_votos_3+=1;
                bucle=true;
                break;
            }
            default:{
                cout<<"digite un voto valido"<<endl;
            }
        }
    }while(bucle!=true);
}

    if((suma_votos_1>suma_votos_2)&&(suma_votos_1>suma_votos_3)){
        cout<<"el ganador es el cantidato 1!";
    }
    else if((suma_votos_2>suma_votos_1)&&(suma_votos_2>suma_votos_3)){
        cout<<"el ganador es el cantidato 2!";
    }
    else if((suma_votos_3>suma_votos_2)&&(suma_votos_3>suma_votos_1)){
        cout<<"el ganador es el cantidad 3!";
    }
    else if((suma_votos_1==suma_votos_2)||(suma_votos_1==suma_votos_3)||(suma_votos_2==suma_votos_3)){
        cout<<"hay un empate!";
    }

}