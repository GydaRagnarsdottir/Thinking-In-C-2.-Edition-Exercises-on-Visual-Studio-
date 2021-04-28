//Make a new version of ConstPointer.cpp called
//ConstReference.cpp which demonstrates references
//instead of pointers
void t(int&) {}
void u(const int& cip) {
	//! &cip = 2; // Illegal -- modifies value
	//! int i = &cip; // Illegal
					//a value of type "const int" cannot be used to initialize an entity
					// of type "int"
	 int ip2 = cip; // Legal, copy value
}
const char& v() {
	// Returns address of static character array:
	const char* a = "result of function v()";
	const char& b = *a;
	return b;
}
const int& const w() {
	static int i;
	return i;
}
int main() {
	int x = 0;
	int& ir = x;
	const int& cir = x;
	t(ir); // OK
	//! t(cir); // Not OK
			//qualifiers dropped in binding reference of type "int&" to initializer of type
			//"const int"
	u(ir); // OK
	u(cir); // Also OK
	//! char& cp = v(); // Not OK
					//qualifier dropped in binding reference of type "char&" to initializer
					//of type "const char"
	const char& ccp = v(); // OK
	//! int& ir2 = w(); // Not OK
					//qualifiers dropped in binding reference of type "int&" to initializer 
					//of type "const int"
	const int& const ccip = w(); // OK
	const int& cip2 = w(); // OK
	//! &w() = 1; // Not OK
				//Expression must be a modifiable lvalue
}
