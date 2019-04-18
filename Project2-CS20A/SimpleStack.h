/*
 * SimpleStack.h
 *
 */

#ifndef SIMPLESTACK_H_
#define SIMPLESTACK_H_

#include "SimpleList.h"

class SimpleStack {
	SimpleList list;

public:

	/*
	 * true if the stack is empty, false otherwise
	 */
	bool isEmpty() const;

	/*
	 * Add to the stack
	 */
	void push(string e);

	/*
	 * Remove the element at the top of the stack and return it
	 */
	string pop();

	/*
	 * Get the element at top of the stack
	 */
	string peek() const;
};

#endif /* SIMPLESTACK_H_ */
