#include <iostream>
using namespace std;

class Node
{
	public:
		Node(int value, int index);
		~Node(void);
		int value;
		int index;
		Node *next;
};

Node :: Node (int value = 0, int index = 0)
{
	this->value = value;
	this->index = index;
	this->next = NULL;
}

Node :: ~Node(void)
{
	cout << "deleting node with value: " << value << endl;
}