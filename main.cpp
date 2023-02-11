#include <iostream>
using namespace std;

int intt(int, int);

int main() 
{
	int num, step, res;
	cout << "number - ";
	cin >> num;
	cout << "power - ";
	cin >> step;
	res = intt(num, step);
	cout << num << "^" << step << "=" << res;
}

int intt(int num, int step) 
{
	if (step != 0)
	{
		return(num * intt(num, step - 1));
	}
	else
	{
		return 1;
	}
}