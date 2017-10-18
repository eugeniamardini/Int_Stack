#pragma once
#pragma once

const int MAX_COUNT = 100;

class IntStack
{
	public:
		IntStack();
		bool Pop(int &value);
		bool Push(int value);
		bool Peek(int &value);
		int getCount() const;
		bool isEmpty() const;
		bool isFull() const;
		~IntStack();

	private:
		int theStack[MAX_COUNT];
		int count;
};

