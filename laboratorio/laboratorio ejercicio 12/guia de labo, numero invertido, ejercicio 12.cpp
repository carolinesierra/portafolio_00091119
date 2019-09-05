//Ejerciico 12, cnumero invertido.

#include <iostream>

using namespace std;

int main()
{
    int numero, sobras, numInv=0;
    
    cout<<"Ingrese un numero entero: "<<endl;
    cin>> numero;
    
    cout<<"El numero invertido es : "<<numero<<endl;
    
    while(numero>0){
        sobras=numero%10;
        numero=numero/10;
        numInv=numInv*10+sobras;   //num in =12 por 10 y mas 7.
    }
    
    cout<<"El numero inverido es: "<<numInv;
    
    return 0;
}

