#include <iostream>
using namespace std;
int TestFunc(int nParam = 10) {
	return nParam;
}
int main() {
	cout << TestFunc() << endl;
	cout << TestFunc(29) << endl;
}