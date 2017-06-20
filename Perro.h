#include <string>
#include "Mamifero.h"

#ifndef PERRO_H
#define PERRO_H

using namespace std;

class Perro : public Mamifero {
	public:
		Perro();

		string getNombre();
		string getSonido();
};
#endif