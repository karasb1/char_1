#include <iostream>
using namespace std;

int main()
{
	char myChar[] = "Zoos";
	cout << myChar << endl;
	int number = 2;
	for (int i = 0; i < sizeof(myChar); i++)
	{
		if (i == number)
		{
			continue;
		}
		else
		{
			cout << myChar[i];
		}
	}
	return 0;
}