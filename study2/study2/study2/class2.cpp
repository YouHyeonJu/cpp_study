#include <iostream>
using namespace std;
class CTest{
public:
	CTest() {
		m_nData = 10;
	}
	int m_nData;
	void PrintData(void) {
		cout << m_nData << endl;
	}
};
int main() {
	CTest T;
	T.PrintData();
}