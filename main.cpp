#include <iostream>
using namespace std;

int main()
{
	const int size = 50;
	cout << "Size - ";
	char myChar[size];
	cin >> myChar;
	int numbers = 0;
	int letters = 0;
	int symbols = 0;
	for (int i = 0; i < sizeof(myChar); i++)
	{
		if (myChar[i] > 47 && myChar[i] < 58)
		{
			numbers++;
		}
		else if (myChar[i] < 91 && myChar[i] > 64 || myChar[i] < 123 && myChar[i] > 96)
		{
			letters++;
		}
		else
		{
			symbols++;
		}
	}
	cout << "Numbers : " << numbers << endl;
	cout << "Letters : " << letters << endl;
	cout << "Symbols : " << symbols << endl;
	return 0;
}