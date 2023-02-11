#include <iostream>
using namespace std;

int intt(int, char);

int main() 
{
	int num, res;
	char symb;
	cout << "number - ";
	cin >> num;
	cout << "symbol - ";
	cin >> symb;
	cout << symb;
	res = intt(num, symb);
}

int intt(int num, char symb)
{
	if (num < 2)
	{
		return 1;
	}
	cout << ' ' << symb;
	return intt(num - 1, symb);
}