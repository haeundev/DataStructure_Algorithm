#pragma once

struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
private: 
	Node* head;
	Node* tail;
	int size = 0;

public:
	LinkedList();

	void AddHead(int n);
	void AddNode(int n);
	void DeleteNode(int n);
	void ShowLinkedList(Node* head);

	Node* GetHead() { return head; }
	int GetSize() { return size; }
};