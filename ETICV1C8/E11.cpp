int d = 1;
const int e = 2;
int* u = &d; // OK -- d not const
//int* v = &e; // Illegal -- e const
			 //a value of type "const int*" cannot be used to initialize an entity of type "int*"
int* w = (int*)&e; // Legal but bad practice
int main(){}