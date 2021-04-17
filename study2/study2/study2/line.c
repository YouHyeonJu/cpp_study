#include <stdio.h>
typedef struct USERDATA {
	int nAge;
	char szName[32];

}USERDATA;
int main() {

	USERDATA user = { 20,"Ã¶¼ö" };
	printf("%d, %s\n", user.nAge, user.szName);
}