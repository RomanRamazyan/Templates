#include <iostream>
#include <stack>
#include <vector>

void reverseResult(int arr[5])
{
    std::stack<int> myStack;
	for(int i = 0; i < 5; i++) 
	{
    	myStack.push(arr[i]);
	}
	std::vector<int> array;
    while(!myStack.empty()) {
        std::cout << myStack.top() << " ";
        array.push_back(myStack.top());
        myStack.pop();
    }
}

int main() {
	int myArr[5] = { 1, 2, 3, 4, 5 };
	reverseResult(myArr);
    return 0;
}
