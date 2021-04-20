#include <iostream>
using namespace std;
class CTest {
	int m_nData;
public:
	CTest()
	{
		cout << "CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest()"<< endl;
	}
};
int main() {
	cout << "Begin" << endl;
	CTest* pData = new CTest[3];
	cout << "Hi" << endl;
	delete pData;
	cout << "End" << endl;

}