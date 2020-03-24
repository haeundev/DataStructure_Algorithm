#include <iostream>
using namespace std;
#include "LinkedList.h"

int main()
{
	LinkedList* list = new LinkedList;
	list->AddHead(0);
	list->AddNode(1);
	list->AddNode(13);
	list->AddNode(51);
	list->AddNode(16);
	list->AddNode(18);
	list->DeleteNode(16);
	list->ShowLinkedList(list->GetHead());

	cout << "sdfdf";
}