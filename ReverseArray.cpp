#include <iostream>
using namespace std;

// type형의 x와 y 값을 교환하는 함수 형식 매크로.
// 다중 구문의 매크로함수 전체가 도중에 멈추지 않고 실행되게 하기 위해
// do while(0)을 사용한다.
#define SWAP(type, x, y) do {type t = x; x = y; y = t;} while(0)

void ReverseArray(int arr[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		SWAP(int, arr[i], arr[n - i - 1]);
	}
}