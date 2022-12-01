#include <iostream>
#include <string>

template <class T> class Stack {
public:
	T myTop();
	Stack();
  	int myStackSize = 0;
	int size();
	void myPush(T k);
	T myPop();

	bool myEmpty();
private:
	int top;
	T si[5];
};

template <class T> Stack<T>::Stack() { top = -1; }

template <class T>
int Stack<T>::size()
{
    std::cout << myStackSize;
    return myStackSize;
}

template <class T> T Stack<T>::myTop()
{
    T top_element = si[top];
    return top_element;
}

template <class T> T Stack<T>::myPop()
{
	T myPopped_element = si[top];
	return myPopped_element;
}

template <class T> void Stack<T>::myPush(T k)
{
	myStackSize = myStackSize + 1;
	top = top + 1;
	si[top] = k;
}

template <class T> bool Stack<T>::myEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}


int main()
{

	Stack<int> integer_stack;
	Stack<std::string> string_stack;
	integer_stack.myPush(2);
	integer_stack.myPush(54);
	integer_stack.myPush(255);
	integer_stack.myPush(55);
    std::cout << "size for int is: ";
    integer_stack.size();
    std::cout << std::endl;
	string_stack.myPush("a");
	string_stack.myPush("b");
	string_stack.myPush("c");
	string_stack.myPush("ds");
	string_stack.myPush("fsd");
    std::cout << "size for string is: ";
    string_stack.size();
    std::cout << std::endl;
	std::cout << "removed element from stack is: " << integer_stack.myPop() << std::endl;
	std::cout << "size for int after myPop is: ";
	integer_stack.size();
	std::cout << std::endl;
	std::cout << "removed element from stack is: " << string_stack.myPop()  << std::endl;
    std::cout << "size for string after myPop is: ";
    string_stack.size();
    std::cout << std::endl;

	return 0;
}

