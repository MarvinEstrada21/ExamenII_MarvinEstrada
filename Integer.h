#include <string>

#ifndef INTEGER_H
#define INTEGER_H

using namespace std;

class Integer {
	private:
		int numero;
	public:
		Integer();
		Integer(int);

		int getNumero();
		void setNumero(int);

		Integer* operator+ (Integer*);
		Integer* operator- (Integer*);
		Integer* operator* (Integer*);
};
#endif