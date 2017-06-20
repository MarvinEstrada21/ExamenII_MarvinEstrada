#include "Integer.h"

Integer :: Integer() {

}

Integer :: Integer(int numero) {
	this -> numero = numero;
}

int Integer :: getNumero() {
	return numero;
}

void Integer :: setNumero(int numero) {
	this -> numero = numero;
}

Integer* Integer :: operator+ (Integer* temp) {
 	Integer* temporal = new Integer();
 	int numT;
 	numT = numero + temp -> getNumero();
 	temporal -> setNumero(numT);
 	return temporal;
}

Integer* Integer :: operator- (Integer* temp) {
	Integer* temporal = new Integer();
 	int numT;
 	numT = numero - temp -> getNumero();
 	temporal -> setNumero(numT);
 	return temporal;
}

Integer* Integer :: operator* (Integer* temp) {
	Integer* temporal = new Integer();
 	int numT;
 	numT = numero * temp -> getNumero();
 	temporal -> setNumero(numT);
 	return temporal;
}