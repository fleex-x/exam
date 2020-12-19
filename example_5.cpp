struct Foo {
	int x;
	Foo (int x_ = 0): x(x_) {}
	Foo& operator=(const Foo &other) {
		x = other.x;
		return *this;
	}
};
