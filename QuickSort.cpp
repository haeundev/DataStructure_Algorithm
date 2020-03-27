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

	while (i <= j) 		// �����Ͱ� ������ ������ �ݺ� 
	{
		while (i <= end && arr[i] <= arr[pivot])
			i++;

		while (j > start && arr[i] >= arr[pivot])
			j--;

		if (i <= j)
		{
			// i��°�� j��°�� ���� 
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		else
		{
			// ������ 
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
	}

	// ���� ����
	QuickSort(arr, start, j - 1);
	QuickSort(arr, j + 1, end);
}