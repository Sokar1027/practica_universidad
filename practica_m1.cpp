#include <iostream>
using namespace std;

void calcular_promedio(int notas[][3], int n_estudiantes, int n_notas);
void calcular_mayor_promedio_examen(int notas[][3], int n_estudiantes, int n_notas);

int main(){

}


void calcular_promedio(int notas[][4], int n_estudiantes, int n_notas, float calificaciones[]){


    for(int i=0; i<n_estudiantes; i++){

        int suma_total = 0;
        
        for (int j=0; j<n_notas; j++){

            suma_total += notas[i][j];
        }

        calificaciones[i] = suma_total/n_notas;
    }
}

int calcular_mayor_promedio_examen(int notas[][4], int n_estudiantes, int n_notas){

    int indice_maximo; float nota_maxima=0, promedio;

    for(int i=0; i<n_notas; i++){

        int suma_total=0;
        for(int j=0; j<n_estudiantes; j++){

            suma_total += notas[j][i];
        }

        promedio = suma_total / n_estudiantes;

        if(promedio > nota_maxima){
            nota_maxima = promedio;
            indice_maximo = i;
        }

    }

    return indice_maximo;
}