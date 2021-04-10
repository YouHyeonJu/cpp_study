#include <iostream>
using namespace std;
void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int data = 0, Bdata=10;
	Swap(data, Bdata);
	cout << "data: " << data << endl;
	cout << "Bdata: " << Bdata << endl;
	return 0;
}