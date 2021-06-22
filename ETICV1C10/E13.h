#pragma once
#ifndef E13_H
#define E13_H
//static int addition(int a, int b) {
//	return a + b;
//}
//If the definition of the function is in the header, even after adding
//"static" keyword before the definition, it can still be resolved.
//static 
int addition(int, int);
//With "static":
//C2129: static function 'int addition(int,int)'declared but not defined
#endif
