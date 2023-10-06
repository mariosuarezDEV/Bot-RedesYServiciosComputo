#ifndef _Temas
#define _Temas

#include "nodo.h"

class temas
{
private:
	nodo* cab; //apuntador al inicio de la lista
	int id;

public:
	temas();
	bool estaVacia();
	void meter(string x);
	void eliminar();
	void mostrar();
	int obtenerId();
	int obtenerTema(string x);
};

temas::temas(){
	cab=NULL;
	id=1;
}

//ver si la lista esta vacia
bool temas::estaVacia(){
	if (cab==NULL)
	{
		return true;
	}else{
		return false;
	}
}

//metodo para meter datos
void temas::meter(string x){
	//creamos un nuevo nodo
	nodo* p;
	p = new nodo();
	p->setId(obtenerId()); // Asignar el próximo ID
	p->setDato(x); //guardamos el dato
	p->setSig(cab); //pasamos guardamos el valor de cabeza al siguiente nodo
	cab=p; //ponemos el inicio igual al nuevo dato que guardamos
}

int temas::obtenerId(){
	return id++;
}

int temas::obtenerTema(string x){
	//creamos un nodo
	nodo* p;
	p=cab;
	while(p!= NULL){
		if (p->getDato() == x)
		{
			return p->getId();
		}
		p=p->getSig();
	}
	return -1; //en caso de que no haya encontrado ningun resultado
}

void temas::mostrar(){
	nodo* p;
	p=cab;
	if (estaVacia() == true)
	{
		cout<<"La lista de informacion esta vacia"<<endl;
	}
	while(p!= NULL){
		cout<<p->getDato()<<endl;
		p=p->getSig();
	}
}


#endif