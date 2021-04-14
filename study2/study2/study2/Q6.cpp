#include <iostream>
using namespace std;
int main() {
	int aList[5] = { 10,20,30,40,50 };
	for (auto n : aList) {
		cout << n << endl;
	}
}