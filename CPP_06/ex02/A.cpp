#include "A.hpp"

A :: A(void) {}
A :: ~A(void) {}
A :: A(const A & other) {*this = other; }

A  & A :: operator=(const A & other) {
	static_cast<void>(other);
	return *this;
}