#include <iostream>
using namespace std;

int BinarySearch(const int arr[], int elementAmount, int key)
{
	int leftest = 0;
	int rightest = elementAmount - 1;
	int center;

	do
	{
		center = (leftest + rightest) / 2;
		cout << center << "\n";

		if (arr[center] == key)
			return center;
		else if (arr[center] < key)
			leftest = center + 1;
		else
			rightest = center - 1;

	} while (leftest <= rightest);

	return -1;
}

int main()
{
	const int myArray[] = { 1,2,3,4,5,6,7,8 };

	int key, index;

	cout << "검색할 값: "; cin >> key;

	index = BinarySearch(myArray, sizeof(myArray) / sizeof(int), key);

	if (index == -1)
		cout << "검색 실패!" << endl;
	else
		cout << key << "는 배열의 [" << index << "] 원소입니다.";
}