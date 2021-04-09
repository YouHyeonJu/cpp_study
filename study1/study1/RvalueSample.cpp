#include <iostream>
using namespace std;
int TestFunc(int nParam) {
	int nResult = nParam * 2;
	return nResult;
}
int main()
{
	int nInput = 0;
	cout << "Input number: ";
	cin >> nInput;

	int&& rdata = nInput + 5;
	cout << rdata << endl;

	int&& result = TestFunc(10);

	result += 10;
	cout << result << endl;

	return 0;
}