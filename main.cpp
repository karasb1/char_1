#include <iostream>
using namespace std;

int main()
{
	char myChar[] = "Zoos1! are2@ hugely3# popular4$ attractions5% for6^ adults7& and8* children9( alike10).";
	int letter = 0;
	int numbers = 0;
	int other_symbols = 0;
	for (int i = 0; i <= sizeof(myChar); i++)
	{
		if (myChar[i] > 47 && myChar[i] < 58)
		{
			numbers++;
		}
		else if (myChar[i] > 65 && myChar[i] < 91 || myChar[i] > 96 && myChar[i] < 123)
		{
			letter++;
		}
		else
		{
			other_symbols++;
		}
	}
	cout << "Letter = " << letter << endl;
	cout << "Numbers = " << numbers << endl;
	cout << "Other symbols = " << other_symbols << endl;
	return 0;
}