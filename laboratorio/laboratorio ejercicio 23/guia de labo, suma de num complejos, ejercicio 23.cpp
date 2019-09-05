//Ejerciico 23, numeros complejos.

#include <iostream>

using namespace std;


struct Complejo{
  float parteReal, parteImaginaria;
    
}num1,num2;

//Prototipo de funcion.

void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo);

int main(){
    pedirDatos();
    
    Complejo x = suma(num1,num2);
    
    muestra(x);
    
    return 0;
}

void pedirDatos(){
cout<<"Digite los datos del primer complejo: "<<endl;
cout<<"Parte real: "<<endl;
cin>>num1.parteReal;
cout<<"Parte Imaginaria: "<<endl;
cin>>num1.parteImaginaria;

cout<<"Digite los datos dels egundo numero complejo: "<<endl;
cout<<"Parte real: "<<endl;
cin>>num2.parteReal;
cout<<"Parte Imaginaria: "<<endl;
cin>>num2.parteImaginaria;
}

Complejo suma( Complejo num1, Complejo num2){
    num1.parteReal += num2.parteReal;//almacenando en z1
    num1.parteImaginaria += num2.parteImaginaria;
    
    return num1;
}

void muestra(Complejo x){
    cout<<"Resultado de la suma: "<<x.parteReal<< " , " <<x.parteImaginaria<<endl;
}
