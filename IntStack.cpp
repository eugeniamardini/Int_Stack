#include "IntStack.h"




//
//  Implementation of an Push-Pop Stack which takes integers.
//  Values to push and pop are passed in by reference.  
//  true/false is returned for successful push-pop
//  false indicates a full or empty stack when pushing/popping
//

IntStack::IntStack()
{
	count = 0;
}

bool IntStack::Pop(int &value)
{
	if (count > 0)
	{
		count--;
		value = theStack[count];
		return true;
	}
	else
	{
		return false;
	}
}

bool IntStack::Push(int value)
{
	if (count < MAX_COUNT)
	{
		theStack[count] = value;
		count++;
		return true;
	}
	else
	{
		return false;
	}
}

bool IntStack::Peek(int &value)
{
	if (count > 0)
	{
		value = theStack[count-1];
		return true;
	}
	else
	{
		return false;
	}
}

int IntStack::getCount() const
{
	return count;
}

bool IntStack::isEmpty() const
{
	return (count == 0);
}

bool IntStack::isFull() const
{
	return (count == MAX_COUNT);
}


IntStack::~IntStack()
{
}
