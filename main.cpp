#include <iostream>
using namespace std;

int main()
{
	char myChar[100];
	cin >> myChar;
	for (int i = 0; i <= sizeof(myChar); i++)
	{
		if (myChar[i] == 46)
		{
			myChar[i] = 33;
		}
	}
	cout << myChar;
	return 0;
}