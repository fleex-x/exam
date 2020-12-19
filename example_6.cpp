#include <iostream>
struct Foo {
	int x;
	Foo (int x_ = 0): x(x_) {}
	Foo& operator=(const Foo &other) {
		x = other.x;
		return *this;
	}
};

int main() {
	Foo a, b, c;
	a = b = c = Foo(5);
	(a = b) = (c = Foo(6));
	std::cout << a.x << std::endl; // 6
	std::cout << b.x << std::endl; // 5
	std::cout << c.x << std::endl; // 6
}
