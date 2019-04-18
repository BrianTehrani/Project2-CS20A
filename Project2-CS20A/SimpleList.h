#pragma once
/*
 * SimpleList.h
 *
 */

#include <string>
using namespace std;

class SimpleList {

	struct Node {
		string val;
		Node* next;
	};

	int size;
	Node* head;
	Node* tail;

public:
	/*
	 * Default ctor
	 */
	SimpleList();

	/*
	 * return the list size
	 */
	int getSize() const;

	/*
	 * Add element e to the end of the list
	 */
	void add(string e);

	/*
     * Add element e to the front of the list
	 */
	void addFront(string e);

	/*
	 * Get the element at position index
	 *
	 */
	string get(int index) const;

	/*
	 * Set the element at position index to the given element
	 */
	void set(int index, string element);

	/*
	 * Remove the element at the front of the list and return the element
	 *
	 */
	string removeFront();

	/*
	 * Print all the list elements in order (in one line, separated by commas)
	 */
	void printList() const;
};

