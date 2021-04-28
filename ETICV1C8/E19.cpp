//Create a class containing both a constand a non - const
//float.Initialize these using the constructor initializer list.

class H {
	const double a1 = 0.0;
	double a2;
public:
	H();
	H(const double b1, double b2);
};

H::H() {
	a2 = 0.0;
}

H::H(const double b1, double b2):a1(b1),a2(b2) {}



int main() {
	H(1.2, 3.4);
}