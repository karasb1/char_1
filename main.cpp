#include <iostream>
using namespace std;

int main()
{
	char myChar[100];
	char symbol[2];
	cin >> myChar;
	cin >> symbol;
	int count = 0;
	for (int i = 0; i <= sizeof(myChar); i++)
	{
		if (myChar[i] == symbol[0])
		{
			count++;
		}
	}
	cout << count;
	return 0;
}