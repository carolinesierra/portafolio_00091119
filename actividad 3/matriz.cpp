//Michelle Sierra Linares Carnet: 00091119.

#include <iostream>

using namespace std;

int m[10][20];

int main( ){
    int i;
 
for (i=0; i<20; i++){
    m[0][i]=100+i;
}
for ( i=0; i<20; i++){
    m[1][i]=120+i;
}
for (i=0; i<20; i++){
    m[2][i]=140+i;
}
for (i=0; i<20; i++){
    m[3][i]=160+i;
}
for (i=0; i<20; i++){
    m[4][i]=180+i;
}
for ( i=0; i<20; i++){
    m[5][i]=200+i;
}
for ( i=0; i<20; i++){
    m[6][i]=220+i;
}
for (i=0; i<20; i++){
    m[7][i]=240+i;
}
for ( i=0; i<20; i++){
    m[8][i]=260+i;
}
for (i=0; i<20; i++){
    m[9][i]=280+i;
}

cout<<"  Mostradno los valores de las direcciones de la Matriz. "<<endl;

cout << "La direccion del primer  elemento  a[0][0]  es : " << m[0][0] << endl;
cout << "La direccion del segundo elemento  a[2][1]  es : " << m[2][1] << endl;
cout << "La direccion del tercer  elemento  a[5][1]  es : " << m[5][1] << endl;
cout << "La direccion del cuarto  elemento  a[1][10] es : " << m[1][10] << endl;
cout << "La direccion del quinto  elemento  a[2][10] es : " << m[2][10] << endl;
cout << "La direccion del sexto   elemento  a[5][3]  es : " << m[5][3] << endl;
cout << "La direccion del septimo elemento  a[9][19] es : " << m[9][19] << endl;

return 0;
}


// 1. si.  2. si. 3. si 4.no 5.no 
