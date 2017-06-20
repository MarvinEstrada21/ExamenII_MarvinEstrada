#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <vector>

#include "Animal.h"
#include "Mamifero.h"
#include "Perro.h"
#include "Gato.h"
#include "Oveja.h"
#include "Integer.h"

using namespace std;

string Aleatorio();

int main() {
	vector<Integer*> lista_nums;
	ofstream archivo;
	archivo.open("Animales.txt");
	int cantidad = 10;
	string animales[cantidad];
	int opcion;
	cout << "  MENU PRINCIPAL   " << endl
		<< "1.- Crear un arreglo de Animales e Imprimir Archivo" << endl
		<< "2.- Suma" << endl
		<< "3.- Resta" << endl
		<< "4.- Multiplicación" << endl
		<< "5.- Salir" << endl;
	cout << "Ingrese la opción que desea ejecutar: ";
	cin >> opcion;
	while (opcion != 5) {
		if (opcion == 1) {
			string temp;
			for (int i = 0; i < cantidad; i++) {
				temp = Aleatorio();
				animales[i] = temp;
				//cout << temp << endl;
				archivo << temp;
				archivo << endl;
			}
			cout << "Arreglo llenado exitosamente" << endl;
		}
		if (opcion == 2) {
			int num1, num2;
			cout << "Ingrese el primer número: ";
			cin >> num1;
			cout << "Ingrese el segundo número: ";
			cin >> num2;

			Integer* numero = new Integer(num1);
			Integer* numero2 = new Integer(num2);
			numero2 = *numero + numero2;
			int sumasobre = numero2 -> getNumero();
			cout << "El resultado es: " << sumasobre << endl;
		}
		if (opcion == 3) {
			int num1, num2;
			cout << "Ingrese el primer número: ";
			cin >> num1;
			cout << "Ingrese el segundo número: ";
			cin >> num2;

			Integer* numero = new Integer(num1);
			Integer* numero2 = new Integer(num2);
			numero2 = *numero - numero2;
			int sumasobre = numero2 -> getNumero();
			cout << "El resultado es: " << sumasobre << endl;
		}
		if (opcion == 4) {
			int num1, num2;
			cout << "Ingrese el primer número: ";
			cin >> num1;
			cout << "Ingrese el segundo número: ";
			cin >> num2;

			Integer* numero = new Integer(num1);
			Integer* numero2 = new Integer(num2);
			numero2 = *numero * numero2;
			int sumasobre = numero2 -> getNumero();
			cout << "El resultado es: " << sumasobre << endl;
		}
		archivo.close();
		cout << endl;
		cout << "  MENU PRINCIPAL   " << endl
		<< "1.- Crear un arreglo de Animales e Imprimir Archivo" << endl
		<< "2.- Suma" << endl
		<< "3.- Resta" << endl
		<< "4.- Multiplicación" << endl
		<< "5.- Salir" << endl;
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