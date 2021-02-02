/*
Find out how to produce assembly language from your C
and C++ compilers.Write a function in Cand a struct
with a single member function in C++.Produce assembly
language from eachand find the function names that are
produced by your C functionand your C++ member
function, so you can see what sort of name decoration
occurs inside the compiler.
*/

struct A {
	int add(int, int);
};

int A::add(int a, int b) {
	return (a + b);
}

int main() {
	A a;
	int b = 1, c = 2;
	int e = a.add(b, c);
}

/*	
	int e = a.add(b, c);
006D4100  mov         eax,dword ptr [c]  
006D4103  push        eax  
006D4104  mov         ecx,dword ptr [b]  
006D4107  push        ecx  
006D4108  lea         ecx,[a]  
006D410B  call        A::add (06D11C2h)  
006D4110  mov         dword ptr [e],eax 
*/
/*
*  int e = add(b,c)
007C2096  mov         eax,dword ptr [b]
007C2099  push        eax
007C209A  mov         ecx,dword ptr [a]
007C209D  push        ecx
007C209E  call        _add (07C1028h)
007C20A3  add         esp,8
007C20A6  mov         dword ptr [e],eax
*/
/*
* Method 1(Quick):
* 1. Set a breakpoint on the line of code whose assembly code you want to inspect.
* 2. Press Ctrl + F10 or click "run to cursor" on the right-click menu
* 3. When done, press Ctrl + K,G or click "go to disassembly" on the right-click menu.
* Method 2:
* 1. Right click on current project, choose "properties" on the bottom of the menu.
* 2. Left click "c/c++", on the drawdown menu "Assembler Output", choose the ones with 
* machine code, then click "Apply" on right bottom of the interface.
* 3. Build solution
* 4. In the Debug folder of the project, you can find the file with suffix ".cod", you 
* can check the generated assembly code there.
* Credit: Andrew Grant@youtube
*/
