#include <iostream>
using namespace std;

int main(){

    int n_ciudades; 
    cout<<"digite el numero de ciudades que desea reportar su temperatura: ";
    cin>>n_ciudades;

    for(int i=1; i<=n_ciudades; i++){
        int temperatura, plus_medicion=0, less_medicion=0, same_medicion=0, temp_max, temp_min, n_vueltas=1, anterior;

        do{
            cout<<"ingrese la temperatura: ";
            cin>>temperatura;

            if(temperatura==-274){
                break;
            }

            if(n_vueltas==1){
                anterior=temperatura;
                n_vueltas+=1;
                temp_max = temperatura;
                temp_min = temperatura;
            }
            else if(temperatura>anterior){
                plus_medicion += 1;
                anterior=temperatura;
            }
            else if(temperatura<anterior){
                less_medicion += 1;
                anterior=temperatura;
            }
            else{
                same_medicion += 1;
            }

            if(temperatura>temp_max){
                temp_max= temperatura;
            }
            if(temperatura<temp_min){
                temp_min = temperatura;
            }
        }
        while(temperatura!=-274);

        cout<<"este va a ser el reporte de la ciudad numero "<<i<<" y los valores se desplegaran en el siguiente orden: "<<endl;
        cout<<"mediciones que subieron, mediciones que bajaron, cuantas se mantuvieron iguales, temp maxima, temp minima"<<endl;
        cout<<plus_medicion<<endl<<less_medicion<<endl<<same_medicion<<endl<<temp_max<<endl<<temp_min;
    }
}