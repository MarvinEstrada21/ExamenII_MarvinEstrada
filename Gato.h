#include "Mamifero.h"
#include <string>

#ifndef GATO_H
#define GATO_H

using namespace std;

class Gato : public Mamifero {
	public:
		Gato();

		string getNombre();
		string getSonido();
}; 
#endif