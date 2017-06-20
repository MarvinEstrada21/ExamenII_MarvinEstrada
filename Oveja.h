#include "Mamifero.h"
#include <string>

#ifndef OVEJA_H
#define OVEJA_H

using namespace std;

class Oveja : public Mamifero {
	public:
		Oveja();

		string getNombre();
		string getSonido();
};
#endif