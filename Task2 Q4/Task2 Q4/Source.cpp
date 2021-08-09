#include <iostream>
using namespace std;
void  ELFISH(char ary[], int sizz, int count, char* temp)
{
	cout << endl;
	if (count >= sizz)
		return;


	temp = ary;
	bool elfish;
	if (*temp == 'e')
	{
		elfish = true;
		cout << "Is elfish \n";
		return;
	}

	if (*temp == 'l')
	{
		elfish = true;
		cout << "Is elfish \n";
		return;
	}
	if (*temp == 'f')
	{
		elfish = true;
		cout << "Is elfish \n";
		return;
	}
	if (*temp == 'i')
	{
		elfish = true;
		cout << "Is elfish \n";
		return;


		return ELFISH(ary, sizz, count++, temp++);

	}
	else
		elfish = false;
}
	int main()
	{
		const int size = 1000;
		char str[size];
		cout << "Enter a string \n";
		cin.get(str, size);
		cout << str << endl;
		ELFISH(str, size, 0, NULL);
		return 0;
	}