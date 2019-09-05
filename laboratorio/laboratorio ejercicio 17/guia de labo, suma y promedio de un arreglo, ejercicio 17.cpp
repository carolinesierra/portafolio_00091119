//Ejercicio 17.   Nombre: Caroline Michelle Sierra Linares.  Carnet: 00091119.


#include <iostream>

using namespace std;

int main()
{ 
   
    int arreglo[10], i;
    
    cout<<"Ingrese 10 numeros enteros: ";
    for (i=0; i < 10; i++)
    cin>>arreglo[i];
        
    cout<<"Los elementos del arreglo son los siguientes : "<<endl;
    for (i=0; i < 10; i++)
    cout<<arreglo[i]<<endl;
    
    
    float suma=0;
    float promedio=0;
    int n=0;
    
    while(n<=9){
    
    suma+=arreglo[n];
    n+=1;
    }
    
    promedio=suma/10;
    
    
    cout<<"la suma del arreglo es: "<<suma<<endl;
    cout<<"El promedio del arreglo es: " <<promedio<<endl;    
 return 0;

}

