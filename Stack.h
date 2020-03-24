#pragma once

class Stack
{
private:
	int maxStackSize;
	int top;
	int stack[100] = { 0, };

public:
	Stack(int size);

	void IsFull();
	void IsEmpty();
	void Push(int item);
	void Pop();
	void ShowStack();
};