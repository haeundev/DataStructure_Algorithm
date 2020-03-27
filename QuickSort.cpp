#include <iostream>
using namespace std;

void QuickSort(int* arr, int start, int end)
{
	if (start >= end)
		return;

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) 		// 포인터가 엇갈릴 때까지 반복 
	{
		while (i <= end && arr[i] <= arr[pivot])
			i++;

		while (j > start && arr[i] >= arr[pivot])
			j--;

		if (i <= j)
		{
			// i번째와 j번째를 스왑 
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else
		{
			// 엇갈림 
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
	}

	// 분할 정복
	QuickSort(arr, start, j - 1);
	QuickSort(arr, j + 1, end);
}