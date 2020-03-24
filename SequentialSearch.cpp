#include <iostream>
using namespace std;

int SequentialSearch(const int arr[], int elementAmount, int key)
{
	for (int i = 0; i < elementAmount; i++)
	{
		if (arr[i] == key)
			return i;		// �˻� ����
	}

	return -1;				// �˻� ����
}

int main()
{
	const int myArray[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int key, index;

	cout << "�˻��� ��: "; cin >> key;

	index = SequentialSearch(myArray, sizeof(myArray) / sizeof(int), key);

	if (index == -1)
		cout << "�˻� ����";
	else
		cout << key << "�� �迭�� [" << index << "] �����Դϴ�.";
}
