#include <iostream>
#include <vector>
#include <cassert>

struct Foo {
	int x = 10;
	int y = 20;
	char z = 'a';
	std::vector <int> vec = {1, 2};
};

int main() {
	Foo a; 

	assert(a.x == 10);
	assert(a.y == 20);
	assert(a.z == 'a');
	assert((a.vec == std::vector<int>{1, 2}));

	Foo b{100, 200};
	assert(b.x == 100);
	assert(b.y == 200);
	assert(b.z == 'a');
	assert((b.vec == std::vector<int>{1, 2}));

	Foo c{1, 2, 'b', {3, 4, 5}};
	assert(c.x == 1);
	assert(c.y == 2);
	assert(c.z == 'b');
	assert((c.vec == std::vector<int>{3, 4, 5}));
}