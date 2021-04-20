#include <iostream>
using namespace std;
class CTest {
public:
	CTest() {
		cout << "CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest()" << endl;
	}
};
int main() {
	cout << "Begin" << endl;
	CTest a;
	cout << "Before b" << endl;
	CTest b;
	cout << "End" << endl;
	
}