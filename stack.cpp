#include <vector>

// implementing a simple stack

// 1.LinkedListStack
struct LinkNode
{
	int val;
	LinkNode *next;
	LinkNode(int x) : val(x), next(nullptr) {}
};

class LinkedList_stack
{
private:
	LinkNode *stackTop;
	int stackSize;

public:
	LinkedList_stack(/* args */)
	{
		stackTop = nullptr;
		stackSize = 0;
	}
	~LinkedList_stack()
	{
	}
	// return a stack`s size
	int size()
	{
		return stackSize;
	}
	// judge a stack is empty
	bool isEmpty()
	{
		return size() == 0;
	}
	// push stack
	void push(int num)
	{
		LinkNode *newNode = new LinkNode(num);
		newNode->next = stackTop;
		stackTop = newNode;
		stackSize++;
	}
	// pop stack
	int pop()
	{
		int num = stackTop->val;
		LinkNode *node = stackTop;
		stackTop = node->next;
		delete node;
		stackSize--;
		return num;
	}
	// Access the top element of the stack
	int top()
	{
		if (isEmpty())
		{ // stack is empty
		}
		return stackTop->val;
	}

	// Convert List to Array and return it
};

// 2.ArrayStack
class Array_stack
{
private:
	std::vector<int> stack;
public:
	int size()
	{
		return stack.size();
	}
	bool isEmpty()
	{
		return size() == 0;
	}
	void push(int num)
	{
		stack.push_back(num);
	}
	int pop()
	{
		int num = top();
		stack.pop_back();
		return num;
	}
	int top()
	{
		if(isEmpty()){}
		return stack.back();
	}
};

int main()
{
	return 0;
}