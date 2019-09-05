//Caroline Michelle Sierra Linares    Carnet: 00091119



//Programa donde calcula la mediana de 11 numeros.
/*
#include <iostream> 
#include <stdlib.h> 
using namespace std; 
int main() { 
int numero;float total=0; 
for(int i=0;i<11;i++){ 
cout<<i+1<< ".Introduce  los numeros de menor a mayor : "; 
cin>>numero; 
total+=numero; 
}	
cout<<"El valor de la mediana es: "<<total/11.<<endl; 

return 0; 
}
*/

/*
//programa donde se caclcula la mediana de n numeros.

#include <iostream>

using namespace std;

int main(){
    int numeros[100], n;
    float media = 0;
    float total=0; 
    
    cout<<"Digite el numero de elemntos del arreglo: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
    cout<<i+1<< ". Digite un numero: ";
    cin>>numeros[i];
    }
    //Algoritmo metodo burbuja
    float aux; 
    
    for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
        if(numeros[j] > numeros[j+1]){
            aux= numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1]= aux;
            }
        }
    }
    
    cout<<"Orden ascendente: ";
    for(int i=0; i<n; i++){
        
        cout<<numeros[i]<<" "<<endl;
    }
    
    float mediana ( ){
        int pos= numeros / 2;
        float m = 0;
        if(numeros % 2 == 0){
             m=(float)(numeros[pos-1]+numeros[pos]) / 2.0;
        }
        else {
            m = numeros[pos-1];
        }
        return m;
    }
    cout<<"El valor de la mediana es: "<<mediana<<endl;
    
    return 0;
}
*/
