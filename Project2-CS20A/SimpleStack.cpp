/*
* SimpleStack.cpp
Name: Brian Tehrani
*
*/
#include "SimpleStack.h"

bool SimpleStack::isEmpty() const 
{
	if (list.getSize() == 0)
		return true; // 1
	return false; // 0

}

void SimpleStack::push(string e)
{
	list.addFront(e);
}

string SimpleStack::pop()
{
	string x;
	x = list.removeFront();
	return x;

}

string SimpleStack::peek() const
{
	return list.get(0);
}