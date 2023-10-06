#ifndef _Nodo
#define _Nodo

#include <iostream>

using namespace std;

class nodo
{
private:
	string dato;
	int id;
	nodo* sig; //apuntador al siguiente datos
public:
	void setDato(string dato);
	void setSig(nodo *s);

	void setId(int id);
	int getId();

	string getDato();
	nodo* getSig();
};

void nodo::setDato(string dato){
	this->dato=dato;
}

void nodo::setSig(nodo *s){ //para asignar al siguiente dato
	sig=s;
}

void nodo::setId(int id){
	this->id=id;
}

int nodo::getId(){
	return id;
}

string nodo::getDato(){
	return dato;
}

nodo* nodo::getSig(){ //para obtener el siguiente datos
	return sig;
}


#endif