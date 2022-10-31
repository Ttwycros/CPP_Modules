#include "B.hpp"

B :: B(void) {}
B :: ~B(void) {}
B :: B(const B & other) {*this = other; }

B  & B :: operator=(const B & other) {
	static_cast<void>(other);
	return *this;
}
