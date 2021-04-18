#include <iostream>
using namespace std;
class USERDATA {
public:
	int nAge;
	char szName[32];
	void Print(void) {
		printf("%d %s", nAge, szName);
	}
};
int main() {
	USERDATA user = { 10,"Ã¶¼ö" };
	user.Print();
}