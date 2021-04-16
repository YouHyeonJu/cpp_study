#include <iostream>

using namespace std;
template <typename T>
T Add(T a, T b) {
	return a + b;
}

int main() {
	cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;

}