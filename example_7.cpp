struct Foo {
	int x;
	Foo (int x_ = 0): x(x_) {}
	int operator=(const Foo &other) {
		x = other.x;
		return 228;
	}
};