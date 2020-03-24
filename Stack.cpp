#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack(int size)
	: maxStackSize(size)
{
	top = -1;
}

void Stack::IsFull()
{
	if (top == maxStackSize - 1)
		cout << "Stack is Full \n";
}

void Stack::IsEmpty()
{
	if (top == -1)
		cout << "Stack is Empty \n";
}

void Stack::Push(int item)
{
	if (top >= maxStackSize - 1)
		IsFull();
	else
	{
		stack[++top] = item;
		cout << top << "번째에 " << item << "이 push 되었습니다. \n";
	}
}

void Stack::Pop()
{
	if (top == -1)
		IsEmpty();
	else
	{
		cout << top << "번째에 " << stack[top] << "이 pop 되었습니다. \n";
		top--;
	}
}

void Stack::ShowStack()
{
	if (top == -1)
		IsEmpty();
	else
	{
		cout << "현재 스택에 존재하는 수는:  \n";

		for (int i = 0; i < maxStackSize; i++)
		{
			cout << stack[i] << "  \n";
		}
		cout << endl;
	}
}
