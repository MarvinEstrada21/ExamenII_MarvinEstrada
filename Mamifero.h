#include "Animal.h"
#include <string>

#ifndef MAMIFERO_H
#define MAMIFERO_H

class Mamifero : public Animal {
	public:
		Mamifero();

		string getNombre();
		string getSonido();
};
#endif