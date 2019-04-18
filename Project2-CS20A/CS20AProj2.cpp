//============================================================================
// Name        : Brian Tehrani
// Author      : 
// Version     : CS20A Classes and Data Structures
//============================================================================

#include <iostream>
#include "SimpleList.h"
#include "SimpleStack.h"
using namespace std;

/*
 * Print the given list in reverse by using a stack
 * Performance analysis:
 * 
 */
void printListReversed(SimpleList l) {
	
	// Your code here
	SimpleStack temp;
	for (int i = 0; i < l.getSize(); i++)
	{
		temp.push(l.get(i));
	}

	for (int j = 0; j < l.getSize(); j++)
	{
		cout << temp.pop() << ",";
	}
}


int main() {

	/*
	 * This code is here just as an example.
	 *
	 * Test your code well.
	 * You can leave that code in the main but I will not use that or grade you on it.
	 * I will test your classes with my own driver code.
	 */

	SimpleList s;
	SimpleStack p;
	
	s.add("two");
	s.add("three");
	s.add("four");

	s.addFront("one");
	s.addFront("zero");

	cout << s.get(3) << endl;
	cout << s.getSize() << endl;
	s.set(4, "seven");
	s.printList();
	s.removeFront();
	cout << s.getSize();
	cout << endl;

	cout << s.get(2) << endl;


	s.printList();
	printListReversed(s); cout << endl;

	cout << "below is stack stuff: "<< endl;
	
	cout << p.isEmpty() << endl;
	p.push("one");
	p.push("two");
	p.push("three");
	cout<<p.peek()<<endl;
	cout<< p.pop()<< endl;
	cout<<p.peek()<<endl;
	cout << p.isEmpty() << endl;
	
	return 0;
}
