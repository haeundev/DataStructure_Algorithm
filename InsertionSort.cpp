#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
	int j;
	int next;

	for (int i = 1; i < n; i++)
	{
		next = arr[i];

		for (j = i - 1; j > 0 && next < arr[j]; j--)
		{
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = next;
	}
}