//Caroline Michelle Sierra Linares    Carnet: 00091119
//Disculpas la demora, pues no tengo computadora y me prestan una para subir trabajos como estos, agradezco la compresión, gracias.


#include <iostream>
#include <string>

using namespace std;

struct librito{
    string titulo;
    int numPaginas;
    librito *sig;
};

librito *m = NULL;
librito *n = NULL;

void ingresar(){
n = new librito;

cout<<"\n\tDigite  titulo del libro: ";
cin>>n->titulo;
cout<<"\n\tDigite número de paginas: ";
cin>>n->numPaginas;

        if(m==NULL){
        m=n;
        n->sig=NULL;
    }
    else{
        n->sig = m;
        m = n;
    }
}

void buscando(librito *m, string Titulos){
    if(!m){
        return;
    }
    else{
        if(Titulos== m->titulo){
            cout<<"El libro que usted busco, tiene " << m->numPaginas << " paginas."<<endl;
            cout<<endl;
        }
        buscando(m->sig, Titulos);
    }
}

int main() {

    int direccion=0;
    string Titulos=" ";

    do{
        
        cout<<"\n\t Por favor, digite un número de las siguientes opciones.\n\t"<<endl;
    cout <<   "\n\t--Menú--\n\t1.Agregar libro. \n\t2.Buscar libro. \n\t3.Terminar." << endl;
    cout << "\tSu opción elegida es:";
    cin >> direccion;
        switch(direccion){
            case 1:{
            ingresar();
            }
                break;
            case 2:
                cout<<"Nombre del libro que desea buscar: ";
                cin>>Titulos;
                buscando(m,Titulos);
                break;
            case 3:
                break;
            default: cout << "El numero ingresado no esta entre las opciones, por favor digite un número dentro de las opciones." << endl;
        }
    }

    while(direccion!=3);{
	cout<<"\n\tPrograma Terminado."<<endl;
	}
    return 0;
}
