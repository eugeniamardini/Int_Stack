#include <iostream>
#include "IntStack.h"

using namespace std;

int main()
{
	IntStack testStack;
	bool rc;
	int value;

	cout << "Testing Stack. " << endl;

	if (testStack.Pop(value))
	{
		cout << "Value popped: " << value << endl;
	}
	else
	{
		cout << "Stack Empty\n";
	}

	cout << "Enter integer: ";
	cin >> value;

	testStack.Push(value);
	testStack.Peek(value);
	cout << "Value Peeked: " << value << endl;

	if (testStack.Pop(value))
	{
		cout << "Value Popped: " << value << endl;
	}
	else
	{
		cout << "Stack Empty\n";
	}


// more test code here

	return 0;
}