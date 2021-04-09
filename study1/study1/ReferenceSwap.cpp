#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}
int main()
{
	int x = 10, y = 20;
	swap(x, y);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	return 0;
}