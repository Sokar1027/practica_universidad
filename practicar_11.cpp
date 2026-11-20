#include <iostream>
using namespace std;

int main(){

    int n_filas, num;

    cout<<"digite la cantidad de filas a mostrar: ";
    cin>>n_filas;

    for(int i=1; i<=n_filas; i++){
       
        for(int j=1; j<=i; j++){
            num=j;
            cout<<num<<" ";
        }
        cout<<endl;
    }
}