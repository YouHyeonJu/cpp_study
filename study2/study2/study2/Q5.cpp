#include <iostream>
using namespace std;
int main() {
	//������
	int b = 0;
	
	int *data = &b;
	*data = 30;
	cout << b << endl;
	int nData = 10;
	//������ ����
	int& re = nData;
	cout << re << endl;
	return 0;
}