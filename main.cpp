#include <iostream>
using namespace std;

void r(char myChar[], int a, const char b[])
{
	myChar[a] = b[0];
	cout << myChar << endl;
}


int main()
{
	char mychar[] = "My char";
	cout << mychar << endl;
	r(mychar, 3, "a");
	return 0;
}