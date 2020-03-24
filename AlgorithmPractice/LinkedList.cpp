#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

void LinkedList::AddHead(int n)
{
	Node* temp = new Node;
	temp->data = n;

	head = temp;

	if (head == nullptr)
		tail = temp;
	else
		temp->next = head;

	size++;
}

void LinkedList::AddNode(int n)
{
	Node* temp = new Node;
	temp->data = n;
	temp->next = nullptr;

	tail = temp;
	
	if (head == nullptr)
		head = temp;
	else
		tail->next = temp;

	size++;
}

void LinkedList::DeleteNode(int n)
{
	Node* ptr = head;
	Node* temp = ptr;

	while (ptr != nullptr)
	{
		if (ptr->data == n)
			break;
		else
		{
			temp = ptr;
			ptr = ptr->next;
		}
	}

	if (ptr == nullptr)
		cout << "Cannot Find Data. \n";
	else
	{
		cout << "Deleted : " << ptr->data;

		temp->next = ptr->next;
		delete ptr;

		size--;
	}
}

void LinkedList::ShowLinkedList(Node* head)
{
	if (head == nullptr)
		cout << "No List. \n";
	else
	{
		cout << head->data << " --> ";
		ShowLinkedList(head->next);
	}
	cout << endl;
}