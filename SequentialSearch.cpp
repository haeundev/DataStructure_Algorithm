#include <iostream>
using namespace std;

int SequentialSearch(const int arr[], int elementAmount, int key)
{
	for (int i = 0; i < elementAmount; i++)
	{
		if (arr[i] == key)
			return i;		// 검색 성공
	}

	return -1;				// 검색 실패
}

int main()
{
	const int myArray[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int key, index;

	cout << "검색할 값: "; cin >> key;

	index = SequentialSearch(myArray, sizeof(myArray) / sizeof(int), key);

	if (index == -1)
		cout << "검색 실패";
	else
		cout << key << "는 배열의 [" << index << "] 원소입니다.";
}
