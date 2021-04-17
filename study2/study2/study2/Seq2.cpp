#include <iostream>
using namespace std;
int nData = 100;
namespace TEST
{
	int nData=200;
}
using namespace TEST;
int main() {
	cout << nData << endl;
}