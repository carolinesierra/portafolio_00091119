//Ejercicio 18. matriz diagonal.


#include <iostream>

using namespace std;

int main (){
int numero[5][5];

for(int i=0; i<5; i++){
    for(int j=0; i<5; j++){
        numero[i][j]=0;
    }
}

int n=0;

for(int i=0; i<5; i++){
    cout <<"Ingrese un numero la columna [0] :" << "["<<i<<"]"<< "; ";
    cin>> n;
    numero[0][i]= n;
}
for(int i=1; i<5; i++){
    cout <<"Ingrese un numero en la columna [1] :" << "["<<i<<"]"<< "; ";
    cin>> n;
    numero[1][i]= n;
}
for(int i=2; i<5; i++){
    cout <<"Ingrese un  en la columna  [2] :" << "["<<i<<"]"<< "; ";
    cin>> n;
    numero[2][i]= n;
}
for(int i=3; i<5; i++){
    cout <<"Ingrese un numero en la columna  [3] :" << "["<<i<<"]"<< "; ";
    cin>> n;
    numero[3][i]= n;
}
for(int i=4; i<5; i++){
    cout <<"Ingrese un numero en la columna [4] :" << "fila ["<<i<<"]"<< "; ";
    cin>> n;
    numero[4][i]= n;
}

 //mostrando matriz 
for(int i=0; i<5; i++){
    for(int j=0; i<5; j++){
        cout<<numero[i][j]<<" ";
    }cout<<"\n";
}

        
return 0;
}


