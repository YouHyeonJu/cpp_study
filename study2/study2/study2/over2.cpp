#include <iostream>
using namespace std;
class CMyPoint {
public:
	CMyPoint(int x){
		cout << "CMyPoint(int)" << endl;
		if (x > 100) {
			x = 100;
		}
		m_x = 100;
	};
	CMyPoint(int x, int y):CMyPoint(x){
		
		if (y > 200) {
			y = 200;
		}
		m_y = 200;
	};
	void Print() {
		cout << "x=" << m_x << endl;
		cout << "y=" << m_y << endl;
	}
private:
	int m_x=0,m_y=0;
};
int main() {
	CMyPoint p(110);
	p.Print();
	CMyPoint pp(50, 250);
	pp.Print();
	return 0;
}