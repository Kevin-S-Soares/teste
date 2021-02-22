#include <iostream>
#include "node.h"

using namespace std;

class LinkedList
{
	protected:
		Node *first;
		Node *last;
		int size;
	public:
		LinkedList(void);
		LinkedList(int value);
		LinkedList(int values[], int size);
		~LinkedList(void);
		void append(int value);
		void printAll(void);
		int getValueByIndex(int n);
		int getSize(void);
};
LinkedList :: LinkedList(void)
{
	this->first = NULL;
	this->last = first;
	size = 0;
}
LinkedList :: LinkedList(int value)
{
	this->first = new Node(value);
	this->last = first;
	size = 1;
}
LinkedList :: LinkedList(int values[], int size)
{
	Node *p = NULL;
	for(int i = 0; i < size; i++)
	{
		switch(i)
		{
		case 0:
			this->first = new Node(values[i]);
			break;
		case 1:
			this->first->next = new Node(values[i]);
			p = this->first->next;
			break;
		default:
			p->next = new Node(values[i]);
			p = p->next;

		}	
	}
	if(p == NULL)
	{
		last = first;
	}
	else
	{
		last = p;
	}
	this->size = size;
}
LinkedList :: ~LinkedList(void)
{
	for(Node *p = first, *q; p != NULL; p = q)
	{
		q = p->next;
		delete p;
	}
	
}
void LinkedList :: append(int value)
{
	if(size == 0)
	{
		first = new Node(value, 1);
		last = first;
	}
	else 
	{
		last->next = new Node(value,last->index+1);
		last = last->next;
	}
	size++;
}
void LinkedList :: printAll(void)
{
	for(Node *p = first; p != NULL; p = p->next)
	{
		cout << p->value << endl;
	}
}
int LinkedList :: getValueByIndex(int value)
{
	try
	{
		if(value < 0)
		{
			throw "negative index error";
		}
		else if(value > size-1)
		{
		throw "out of bound index error";
		}
		Node *p;
		for(p = first; p->index != value; p=p->next);
		return(p->value);
	}
	catch(const char *msg)
	{
	}

	return(0);
}
int LinkedList :: getSize(void)
{
	return(size);
}