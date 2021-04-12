#include <iostream>
using namespace std;
int main() {
	//포인터
	int b = 0;
	
	int *data = &b;
	*data = 30;
	cout << b << endl;
	int nData = 10;
	//참조형 변수
	int& re = nData;
	cout << re << endl;
	return 0;
}