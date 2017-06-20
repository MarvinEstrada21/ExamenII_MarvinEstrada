#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

#include "Animal.h"
#include "Mamifero.h"
#include "Perro.h"
#include "Gato.h"
#include "Oveja.h"

using namespace std;

string Aleatorio();

int main() {
	ofstream archivo;
	archivo.open("Animales.txt");
	int cantidad = 10;
	string animales[cantidad];
	int opcion;
	cout << "  MENU PRINCIPAL   " << endl
		<< "1.- Crear un arreglo de Animales" << endl
		<< "2.- Agregar Animales a Archivo de Texto" << endl
		<< "3.- Suma" << endl
		<< "4.- Resta" << endl
		<< "5.- Multiplicación" << endl
		<< "6.- Salir" << endl;
	cout << "Ingrese la opción que desea ejecutar: ";
	cin >> opcion;
	while (opcion != 6) {
		if (opcion == 1) {
			string temp;
			for (int i = 0; i < cantidad; i++) {
				temp = Aleatorio();
				animales[i] = temp;
				cout << temp << endl;
			}
			cout << "Arreglo llenado exitosamente" << endl;
		}
		if (opcion == 2) {
			for (int i = 0; i < 10; i++) {
				archivo << animales[i];
			}
			cout << "Archivo llenado exitosamente" << endl;
		}
		if (opcion == 3) {

		}
		if (opcion == 4) {

		}
		if (opcion == 5) {

		}
		archivo.close();
		cout << endl;
		cout << "  MENU PRINCIPAL   " << endl
		<< "1.- Crear un arreglo de Animales" << endl
		<< "2.- Agregar Animales a Archivo de Texto" << endl
		<< "3.- Suma" << endl
		<< "4.- Resta" << endl
		<< "5.- Multiplicación" << endl
		<< "6.- Salir" << endl;
		cout << "Ingrese la opción que desea ejecutar: ";
		cin >> opcion;
	}
	return 0;
}

string Aleatorio() {
	int random;
	stringstream aleat;
	string aleat2;
	for (int i = 0; i < 1; ++i) {
		random = rand() % 3 + 0;
		if (random == 0){
			aleat << "El Perro hace guau";
		} else if (random == 1){
			aleat << "El Gato hace miau";
		} else if (random == 2){
			aleat << "La oveja hace beeh";
		} else {
			aleat << random;
		}
	}
	aleat2 = aleat.str();
	return aleat2;
}