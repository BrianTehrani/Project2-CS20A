#include "SimpleList.h"
#include <iostream>
SimpleList::SimpleList() {
	head = nullptr;
	tail = nullptr;
	size = 0;
}

int SimpleList::getSize() const {
	return size;
}

void SimpleList::add(string e) {
	
	Node* n = new Node();
	n->val = e;
	n->next = NULL;
	if (head == NULL) { // adding to empty list
		head = n;
		tail = n;
	}
	else { // adding to the end
		tail->next = n;
		tail = n;
	}
	size++;

}

void SimpleList::addFront(string e) {
	Node* frontNode = new Node;
	
	frontNode->val = e;
	frontNode->next = head;
	head = frontNode;
	
	size++;
}

string SimpleList::get(int index) const {
	
	Node* temp = head;

	for(int i = 0; i<index; i++)
	{
		temp = temp->next;
	}

	return temp->val;
}

void SimpleList::set(int index, string elements) {
	Node* temp = head;

	for (int i = 0; i < index; i++) {
		temp = temp->next;
	}
	temp->val = elements;
}

string SimpleList::removeFront() {
	
	Node *temp = head;
	string tempVal = head->val;

	if (head != NULL)
	{
		temp = temp->next;
		delete head;
		size--;
		head = temp;
		return tempVal;
	}
}

void SimpleList::printList() const {
	Node* temp = head;

	while(temp != NULL)
	{
		cout << temp->val << ",";
		temp = temp->next;
	}
	cout << endl;
}