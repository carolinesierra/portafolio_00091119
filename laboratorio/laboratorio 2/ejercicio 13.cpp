#include <iostream>
#include <cmath>

using namespace std;

int main(int argo ,char * argv[])

{    
    float n, i, suma;
    cout<<"Suma de los 'n' primeros numeros." << endl;
    cout<<"Ingrese un numero: " <<endl;
    cin>>n; 
    suma=0;

    for(i=0; i<=n; i++)
    {
        suma = suma+i;
    }
        
    cout<<"El valor de la suma es: "<<suma<<endl;
        
        return 0;
}
