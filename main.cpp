#include <iostream>
using namespace std;

int main()
{
	char myChar[] = "Zoos are hugely popular attractions for adults and children alike.";
	cout << myChar << endl;
	for (int i = 0; i < sizeof(myChar); i++)
	{
		if (myChar[i] == 32)
		{
			myChar[i] = 9;
		}
	}
	cout << myChar;
	return 0;
}