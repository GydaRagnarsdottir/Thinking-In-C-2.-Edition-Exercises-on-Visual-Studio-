class Comm {
	static unsigned char byte;
	static unsigned char flag;
	enum { bufsize = 100 };
	static unsigned char buf[bufsize];
	static int index;
public:
	Comm();
	//static void isr() volatile;
	//E1667 a type qualifier is not allowed on a static member function
	static void isr();
	char read(int index) const;
};
Comm::Comm()  {}

int Comm::index = 0;
unsigned char Comm::flag = 0;
unsigned char Comm::byte = 0;
unsigned char Comm::buf[bufsize] = { 0 };
// Only a demo; won't actually work
// as an interrupt service routine:
//static void Comm::isr(){
//E0080: a storage class may not be specified here
//"static", "auto", "register", "extern", "mutable" are storage classes,
// they should be declared on declaration/header file
//void Comm::isr() volatile {
void Comm::isr() {
	flag = 0;
	buf[index++] = byte;
	// Wrap to beginning of buffer:
	if (index >= bufsize) index = 0;
}
char Comm::read(int index) const {
	if (index < 0 || index >= bufsize)
		return 0;
	return buf[index];
}
int main() {
	volatile Comm Port;
	Port.isr(); // OK
	//! Port.read(0); // Error, read() not volatile
} ///:~
