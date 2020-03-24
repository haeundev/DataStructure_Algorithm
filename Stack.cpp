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
		cout << top << "��°�� " << item << "�� push �Ǿ����ϴ�. \n";
	}
}

void Stack::Pop()
{
	if (top == -1)
		IsEmpty();
	else
	{
		cout << top << "��°�� " << stack[top] << "�� pop �Ǿ����ϴ�. \n";
		top--;
	}
}

void Stack::ShowStack()
{
	if (top == -1)
		IsEmpty();
	else
	{
		cout << "���� ���ÿ� �����ϴ� ����:  \n";

		for (int i = 0; i < maxStackSize; i++)
		{
			cout << stack[i] << "  \n";
		}
		cout << endl;
	}
}
