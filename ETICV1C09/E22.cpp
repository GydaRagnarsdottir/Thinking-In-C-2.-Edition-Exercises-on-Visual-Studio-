//(Challenging)Determine how to get your compiler to
//generate assembly code.Create a file containing a very
//small functionand a main() that calls the function.
//Generate assembly code when the function is inlined and
//not inlined, and demonstrate that the inlined version
//does not have the function call overhead.
#include <iostream>
using namespace std;

inline void simpleFunction(int a, int b, int c) {
	int d = a + b;
	int e = d * c;
	cout << "The result is " << e << endl;
}
 
int main() {
	simpleFunction(1, 2, 3);
	return 0;
}

//Without Inlining:

//void simpleFunction(int a, int b, int c) {
//	00007FF7D8881520  mov         dword ptr[rsp + 18h], r8d
//	00007FF7D8881525  mov         dword ptr[rsp + 10h], edx
//	00007FF7D8881529  mov         dword ptr[rsp + 8], ecx
//	00007FF7D888152D  push        rdi
//	00007FF7D888152E  sub         rsp, 30h
//	00007FF7D8881532  mov         rdi, rsp
//	00007FF7D8881535  mov         ecx, 0Ch
//	00007FF7D888153A  mov         eax, 0CCCCCCCCh
//	00007FF7D888153F  rep stos    dword ptr[rdi]
//	00007FF7D8881541  mov         ecx, dword ptr[a]
//	int d = a + b;
//	00007FF7D8881545  mov         eax, dword ptr[b]
//	00007FF7D8881549  mov         ecx, dword ptr[a]
//	00007FF7D888154D  add         ecx, eax
//	00007FF7D888154F  mov         eax, ecx
//	00007FF7D8881551  mov         dword ptr[d], eax
//	int e = d * c;
//	00007FF7D8881555  mov         eax, dword ptr[d]
//	00007FF7D8881559  imul        eax, dword ptr[c]
//	00007FF7D888155E  mov         dword ptr[e], eax
//	cout << "The result is " << e << endl;
//	00007FF7D8881562  lea         rdx, [__xt_z + 358h(07FF7D888ADF8h)]
//	00007FF7D8881569  mov         rcx, qword ptr[__imp_std::cout(07FF7D888F1D0h)]
//	00007FF7D8881570  call        std::operator<<<std::char_traits<char> > (07FF7D8881046h)
//	00007FF7D8881575  mov         edx, dword ptr[e]
//	00007FF7D8881579  mov         rcx, rax
//	00007FF7D888157C  call        qword ptr[__imp_std::basic_ostream<char, std::char_traits<char> >::operator<< (07FF7D888F160h)]
//	00007FF7D8881582  lea         rdx, [std::endl<char, std::char_traits<char> >(07FF7D8881014h)]
//	00007FF7D8881589  mov         rcx, rax
//	00007FF7D888158C  call        qword ptr[__imp_std::basic_ostream<char, std::char_traits<char> >::operator<< (07FF7D888F168h)]
//}
//	00007FF7D8881592  add         rsp, 30h
//	00007FF7D8881596  pop         rdi
//	00007FF7D8881597  ret
//int main() {
//	00007FF7D88815A0  push        rdi
//	00007FF7D88815A2  sub         rsp, 20h
//	00007FF7D88815A6  mov         rdi, rsp
//	00007FF7D88815A9  mov         ecx, 8
//	00007FF7D88815AE  mov         eax, 0CCCCCCCCh
//	00007FF7D88815B3  rep stos    dword ptr[rdi]
//	simpleFunction(1, 2, 3);
//	00007FF7D88815B5  mov         r8d, 3
//	00007FF7D88815BB  mov         edx, 2
//	00007FF7D88815C0  mov         ecx, 1
//	00007FF7D88815C5  call        simpleFunction(07FF7D888126Ch)
//	return 0;
//	00007FF7D88815CA xor eax, eax
//}
//	00007FF7D88815CC  add         rsp, 20h
//	00007FF7D88815D0  pop         rdi
//	00007FF7D88815D1  ret

//=============================

//With Inlining:
// int main() {
//	00007FF7884C1520  push        rdi
//	00007FF7884C1522  sub         rsp, 20h
//	00007FF7884C1526  mov         rdi, rsp
//	00007FF7884C1529  mov         ecx, 8
//	00007FF7884C152E  mov         eax, 0CCCCCCCCh
//	00007FF7884C1533  rep stos    dword ptr[rdi]
//		simpleFunction(1, 2, 3);
//	00007FF7884C1535  mov         r8d, 3
//	00007FF7884C153B  mov         edx, 2
//	00007FF7884C1540  mov         ecx, 1
//	00007FF7884C1545  call        simpleFunction(07FF7884C126Ch)
//		return 0;
//	00007FF7884C154A xor eax, eax
//	}
//	00007FF7884C154C  add         rsp, 20h
//	00007FF7884C1550  pop         rdi
//	00007FF7884C1551  ret
// 
//inline void simpleFunction(int a, int b, int c) {
//	00007FF7884C1560  mov         dword ptr[rsp + 18h], r8d
//	00007FF7884C1565  mov         dword ptr[rsp + 10h], edx
//	00007FF7884C1569  mov         dword ptr[rsp + 8], ecx
//	00007FF7884C156D  push        rdi
//	00007FF7884C156E  sub         rsp, 30h
//	00007FF7884C1572  mov         rdi, rsp
//	00007FF7884C1575  mov         ecx, 0Ch
//	00007FF7884C157A  mov         eax, 0CCCCCCCCh
//	00007FF7884C157F  rep stos    dword ptr[rdi]
//	00007FF7884C1581  mov         ecx, dword ptr[a]
//	int d = a + b;
//	00007FF7884C1585  mov         eax, dword ptr[b]
//	00007FF7884C1589  mov         ecx, dword ptr[a]
//	00007FF7884C158D  add         ecx, eax
//	00007FF7884C158F  mov         eax, ecx
//	00007FF7884C1591  mov         dword ptr[d], eax
//	int e = d * c;
//	00007FF7884C1595  mov         eax, dword ptr[d]
//	00007FF7884C1599  imul        eax, dword ptr[c]
//	00007FF7884C159E  mov         dword ptr[e], eax
//	cout << "The result is " << e << endl;
//	00007FF7884C15A2  lea         rdx, [string "The result is " (07FF7884CADF8h)]
//	00007FF7884C15A9  mov         rcx, qword ptr[__imp_std::cout(07FF7884CF1D0h)]
//	00007FF7884C15B0  call        std::operator<<<std::char_traits<char> > (07FF7884C1046h)
//	00007FF7884C15B5  mov         edx, dword ptr[e]
//	00007FF7884C15B9  mov         rcx, rax
//	00007FF7884C15BC  call        qword ptr[__imp_std::basic_ostream<char, std::char_traits<char> >::operator<< (07FF7884CF160h)]
//	00007FF7884C15C2  lea         rdx, [std::endl<char, std::char_traits<char> >(07FF7884C1014h)]
//	00007FF7884C15C9  mov         rcx, rax
//	00007FF7884C15CC  call        qword ptr[__imp_std::basic_ostream<char, std::char_traits<char> >::operator<< (07FF7884CF168h)]
//}
//	00007FF7884C15D2  add         rsp, 30h
//	00007FF7884C15D6  pop         rdi
//	00007FF7884C15D7  ret