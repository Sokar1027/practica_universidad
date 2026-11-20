#include <iostream>
using namespace std;

int suma_valores(int valor_1,int valor_2,int valor_3);
void imprimirTotal(int total);

int main(){
    int producto1, producto2, producto3, total_compra;

    cout<<"digite los valores de sus tres productos en el siguiente orden: "<<endl<<"producto 1, producto 2 y producto 3"<<endl;
    cin>>producto1>>producto2>>producto3;

    total_compra = suma_valores(producto1, producto2, producto3);

    imprimirTotal(total_compra);

    return 0 ;

}

int suma_valores(int valor_1,int valor_2, int valor_3){

    int totalc;
    totalc = valor_1+ valor_2+ valor_3;
    
    return totalc;
}

void imprimirTotal(int total){

    cout<<"Este es el total de sus productos: "<<total<<endl;
}