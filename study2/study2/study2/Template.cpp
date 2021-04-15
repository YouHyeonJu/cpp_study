#include <iostream>
using namespace std;
template <typename T>
T TestFunc(T a) {
	cout << "매개변수 a: " << a << endl;
	return a;
}

int main() {
	cout << TestFunc(3) << endl;
	cout << TestFunc(3.3) << endl;
	cout << TestFunc('A') << endl;
	cout << TestFunc("TestString") << endl;
}