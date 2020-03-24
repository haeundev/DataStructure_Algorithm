#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
	int data;
	Node* parent;
	vector<Node*> children;
};

void ShowTree(Node* root)
{
	cout << root->data << "\n";

	for (int i = 0; i < root->children.size(); i++)
		ShowTree(root->children[i]);
}

int GetTreeHeight(Node* root)
{
	int height = 0;

	for (int i = 0; i < root->children.size(); i++)
	{
		height = max(height, GetTreeHeight(1 + root->children[i]));
	}

	return height;
}