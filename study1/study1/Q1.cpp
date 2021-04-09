#include <iostream>
using namespace std;

int main()
{
	string st;
	cout << "당신의 이름을 입력하세요" << endl;
	cin >> st;
	cout<<endl;
	int age=0;
	cout << "당신의 나이를 입력하세요" << endl;
	cin >> age;
	cout << endl;

	cout << "당신의 이름은 " << st << ", 나이는 " << age << " 입니다." << endl;
	return 0;
}