#include <iostream>
using namespace std;

int main()
{
	char myChar[] = "Zoos are hugely popular attractions for adults and children alike.";
	cout << myChar << endl;
	int number = 0;
	for (int i = 0; i < sizeof(myChar); i++)
	{
		if (myChar[i] == 32)
		{
			number++;
		}
	}
	cout << number + 1;
	return 0;
}