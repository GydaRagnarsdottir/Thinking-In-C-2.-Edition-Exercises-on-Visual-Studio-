int main() {
	
	register double b = 0.0;
	for (auto i = 0; i <= 100; i++) {
		b += 0.01;
	}
	return int(b);
}