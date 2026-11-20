#include <iostream>
using namespace std;

int main(){

    int n_cursos, nota, promedio, promedio_anterior,max_curso,promedio_max,valor, n_vuelta=1,suma_notas,n_notas;

    cout<<"digite el numero de grupos a analizar: "<<endl;
    cin>>n_cursos;

    for(int i=1; i<=n_cursos; i++){
        suma_notas=0;
        n_notas=0;
        do{
            cout<<"digite la nota del estudiante: ";
            cin>>nota;

            if(nota==-1){
                break;
            }

            suma_notas +=nota;
            n_notas += 1;
        }while(nota!=-1);

        promedio = suma_notas / n_notas;
        if(n_vuelta==1){

            promedio_max = promedio;
            promedio_anterior = promedio;
            max_curso=i;
            n_vuelta+=1;
        }

        if(promedio>promedio_max){
            promedio_max = promedio;
            max_curso=i;
            promedio_anterior = promedio; 
        }else{
            promedio_anterior = promedio;
        }

    }
    cout<<"el curso con el mejor promedio es: "<<max_curso<<endl<<"su promedio es: "<<promedio_max;
}