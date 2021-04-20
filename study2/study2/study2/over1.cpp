#include <iostream>
using namespace std;
class CMyData {
public:
	CMyData(int nParam) : m_nData(nParam) {

	};
	CMyData(int x, int y) : m_nData(x + y) {

	};
	int GetData(void) { return m_nData; }
private:
	int m_nData;
};
int main() {
	int a = 10,b=20;
	CMyData acc(a);
	CMyData bcc(a,b);
	cout << acc.GetData() << endl;
	cout << bcc.GetData() << endl;
	return 0;
}