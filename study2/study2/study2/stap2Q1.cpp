#include <iostream>
using namespace std;
int TestFunc(int nParam1, int nParam2, int nParam3 = 10) {//�׻� �Ű������� defalt ���� �����ʺ���  �־�� �Ѵ�.
	return nParam1 + nParam2 + nParam3;
}
int TestFunc(int nParam1) {//�׻� �Ű������� defalt ���� �����ʺ���  �־�� �Ѵ�.
	return nParam1;
}
int main() {
	cout << TestFunc(2, 5) << endl;
	cout << TestFunc(2) << endl;
}