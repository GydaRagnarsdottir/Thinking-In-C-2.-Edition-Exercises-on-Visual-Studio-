//Create a class that represents a printer connection, and
//that only allows you to have one printer.
#include <iostream>
#include <string>
using namespace std;

class PrinterConnection {
	static PrinterConnection pc;
	string ptIPaddress;
	PrinterConnection(string ip):ptIPaddress(ip){}
	PrinterConnection(const PrinterConnection& pc);
public:
	static PrinterConnection* getConnection() { return &pc; }
	string viewIP() const{ 
		return ptIPaddress;
	}
};

PrinterConnection PrinterConnection::pc("192.168.1.252");

int main() {
	cout << "Current Printer Connection: " 
		<< PrinterConnection::getConnection()->viewIP() << endl;
	
}