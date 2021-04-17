#include <iostream>
using namespace std;
int main() {
	int nInput = 0;
	cout << "11이상의 정수 입력 " << endl;
	cin >> nInput;
	if (nInput > 10) {
		cout << nInput << endl;

	}
	else {
		cout << "error" << endl;
	}
}