#include "C.hpp"

C :: C(void) {} 
C :: ~C(void) {}
C :: C(const C & other) {*this = other; }

C  & C:: operator=(const C & other) {
	static_cast<void>(other);
	return *this;
}