#include <iostream>
#include <ctime>
using namespace std;

int min(int arr[], int index = 0, int sum = 0, int nowSum = 0, int Index = 0)
{
	if (Index == 100)
		return index;

	int newsum = nowSum + arr[Index];

	if (Index < 10)
		return min(arr, index, newsum, newsum, Index + 1);

	newsum = newsum - arr[Index - 10];
	if (newsum > sum)
		return min(arr, Index - 10, newsum, newsum, Index + 1);
	else
		return min(arr, index, sum, newsum, Index + 1);
}

int main()
{
	srand(time(0));
	const int size = 100;
	int arr[100]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << "\n\n";
	cout << "min sum - " << min(arr);
}