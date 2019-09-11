//Caroline Michelle Sierra Linares.   Carnet: 00091119.

#include<iostream>

using namespace std;

struct Funcion{
	int numero;
	Funcion *siguiente;
};

//Prototipo de funcion.
void agregarPila(Funcion*&, int); 

void sacarPila(Funcion *&, int &);


int main(){
	Funcion *pilas = NULL;
	int numero;
	char rpt;

	do{
		cout<<"Digite un numero: ";
		cin>>numero;
		agregarPila(pilas,numero);

	cout<<"Desea agregar otro elemento a Pila? (s/n) ";
	cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
	
	cout<<"Sacando los elementos de la pila:  ";
	while(pilas != NULL){ //si no es el final de la pila, entonces sacar cada elemento.
	sacarPila(pilas, numero);
	if(pilas !=NULL){
	      cout<<numero<< " , ";
	}else{
		cout<<numero<<".";
	
           }
    }

	return 0;
}
//Prototipo, agregar elemento a pila.
void agregarPila(Funcion *&pilas, int n){
	Funcion *nuevo_elemen = new Funcion();
	nuevo_elemen->numero = n;
	nuevo_elemen->siguiente = pilas;
	pilas = nuevo_elemen;

	cout<<"El elemento "<<n<<" ha sido agregado a nuestra Pila. "<<endl;
}

//Prototipo sacar n elementos de pila.

void sacarPila(Funcion *&pilas, int &n){
	Funcion *aux = pilas;
	n = aux->numero;
	pilas = aux -> siguiente;
	delete aux;
}
