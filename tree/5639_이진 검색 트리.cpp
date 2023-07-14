#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
전위순회 값을 받아 이진트리를 작성한 이후,
이를 후위순회로 출력한다.
*/
struct Node
{
	int value;
	Node* left;
	Node* right;

	Node(int value_)
	{
		value = value_;
		left = nullptr;
		right = nullptr;
	}

	void Insert(int value_)
	{
		if (value > value_)
			if (left == nullptr)
				left = new Node(value_);
			else
				left->Insert(value_);
		else
			if (right == nullptr)
				right = new Node(value_);
			else
				right->Insert(value_);
	}
};

void postOrder(Node* node)
{
	if (node->left != nullptr)
		postOrder(node->left);
	if (node->right != nullptr)
		postOrder(node->right);
	cout << node->value << '\n';
}

int main()
{
	int input;
	cin >> input;
	Node* rootnode = new Node(input);

	while (cin >> input)
		rootnode->Insert(input);

	postOrder(rootnode);

	return 0;
}