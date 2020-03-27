#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
	int flag = 1;

	for (int i = n - 1; flag > 0; i--)
	{
		flag = 0;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
	}
}