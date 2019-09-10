#include <iostream>


using namespace std;

//Metodo de la jugada.

void jugando(int discos, int torrecita1, int torrecita2, int torrecita3){
    
    if(discos == 1){
        cout<<"Mueve tu disco de la torre "<<torrecita1 <<" a torre "<<torrecita3<<endl;
    }else{
        jugando(discos-1, torrecita1, torrecita3,  torrecita2); 
        cout<<"Mueve tu disco de la torre "<<torrecita1<<" a torre "<<torrecita3<<endl;
        jugando(discos-1, torrecita2, torrecita1, torrecita3);
    }
    
}


int main (){ //declranado y pidiendo datos al usuario.
    
    int Torre1 = 1, Torre2 = 2, Torre3 = 3, Discos = 0;
    
    cout<<"¿Con cuántos discos quiere jugar? "<<endl;
    cin>>Discos;
    jugando(Discos, Torre1, Torre2, Torre3);
    
    return 0;
} 

