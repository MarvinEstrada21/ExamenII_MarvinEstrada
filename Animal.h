#include <string>

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
	public:
		Animal();

		virtual string getNombre();

		virtual string getSonido();
};
#endif