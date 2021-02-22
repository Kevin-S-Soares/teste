#include <iostream>
#include "linkedlist.h"
using namespace std;

int main (int argc, char* argv[])
{
	LinkedList *l = new LinkedList(10);
	l->append(20);
	l->append(30);
	int n = l->getValueByIndex(1);
	cout << "funciona: " << n << endl;
	l->printAll();
	delete l;
	LinkedList *r = new LinkedList;
	r->append(100);
	r->append(200);
	r->append(300);
	r->printAll();
	delete r;
	int a[] = {1,2,3};
	LinkedList *b = new LinkedList(a,2);
	b->append(2);
	b->append(3);
	b->printAll();
	delete b;
	
	
	
}
