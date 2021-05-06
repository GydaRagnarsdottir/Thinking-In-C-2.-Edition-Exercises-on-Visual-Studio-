//Write a program that uses the IFOPEN() macro to open
//a file as an input stream.Note the creation of the ifstream
//object and its scope.
#include <fstream>
#include <iostream>
#include <string>
#include "require.h"
using namespace std;
#define IFOPEN(VAR, NAME) \
ifstream VAR(NAME); \
assure(VAR, NAME);

int main(int argc, char* argv[]) {
	requireMinArgs(argc, 1);
	string a = argv[0];
	IFOPEN(inFile, a);
}