struct Foo {
	int x;
	Foo (int x_ = 0): x(x_) {}
	void operator=(const Foo &other) {
		x = other.x;
	}
};
