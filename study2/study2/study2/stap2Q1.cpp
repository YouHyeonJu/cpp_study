#include <iostream>
using namespace std;
int TestFunc(int nParam1, int nParam2, int nParam3 = 10) {//항상 매개변수의 defalt 값은 오른쪽부터  넣어야 한다.
	return nParam1 + nParam2 + nParam3;
}
int TestFunc(int nParam1) {//항상 매개변수의 defalt 값은 오른쪽부터  넣어야 한다.
	return nParam1;
}
int main() {
	cout << TestFunc(2, 5) << endl;
	cout << TestFunc(2) << endl;
}