#include <iostream>
using namespace std;

int intt(int, int);

int main() 
{
	int num_1, num_2, res;
	cout << "number 1 - ";
	cin >> num_1;
	cout << "number 2 - ";
	cin >> num_2;

	res = intt(num_1, num_2);
	cout << res;
}

int intt(int num_1, int num_2)
{
	if (num_1 != num_2 + 1)
	{
		return (num_1 + intt(num_1 + 1, num_2));

	}
	else
	{
		return false;
	}

}