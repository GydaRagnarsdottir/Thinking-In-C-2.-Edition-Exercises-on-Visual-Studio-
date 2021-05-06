//Modify the FIELD() macro so that it automatically
//generates access functions for each field(the data should
//still be private, however).Create a class whose members
//are composed of calls to the FIELD() macro.Write a
//main() to test the class.
#include <iostream>
using namespace std;
//CTE:FIELD(one);-->expected a declaration
//#define ACCESS_STRING(a) public: void set_a##_string(char* c){a##_string=c;}, char* get_a##_string(){return a##_string;}
//#define ACCESS_SIZE(a) public: void set_a##_int(int i){a##_size=i;}, int get_a##_string(){return a##_size;}
//#define FIELD(a) private: char* a##_string; int a##_size; ACCESS_STRING(a), ACCESS_SIZE(a)
#define FIELD(a) \
private: \
    char* a##_string; int a##_size; \
public: \
    void  a##_SetStr(char* c)   { a##_string = c;} \
    void  a##_SetSize(int i)    { a##_size = i;} \
    char* a##_getStr()          { return a##_string; } \
    int   a##_getSize()         { return a##_size; }



class A {
	FIELD(one);
	FIELD(two);
};
int main() {

    A a;

    a.one_SetStr("field one");
    a.one_SetSize(53);

    a.two_SetStr("FIELD TWO");
    a.two_SetSize(6);

    cout << a.one_getStr() << " - " << a.one_getSize() << "\n"
        << a.two_getStr() << " - " << a.two_getSize() << endl;

    return 0;
}