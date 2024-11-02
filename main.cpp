#include <iostream>
using namespace std;

int main()
{
	char myChar[] = "qwer kdooopfd 1412 n(**41 412$ 14";
	char resultChar[] = "";
	cout << myChar << endl;
	char symbol[] = "q";
	for (int i = 0; i < sizeof(myChar); i++)
	{
		if (myChar[i] == symbol[0])
		{
			continue;
		}
		else
		{
			resultChar[i] = myChar[i];
		}
	}
	cout << resultChar;
	return 0;
}