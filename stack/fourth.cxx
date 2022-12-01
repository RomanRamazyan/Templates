#include <iostream>
#include <stack>

int myFunc(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

void reverse(std::string s)
{

	std::stack<char> myStack; 
	std::string result;

	for (int i = 0; i < s.length(); i++) {
		char character = s[i];
		if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') || (character >= '0' && character <= '9')) 
		{
			result += character;

		}else if (character == '(')	
		{
			myStack.push('(');

		}else if (character == ')') 
		{
			while (myStack.top() != '(') {
				result += myStack.top();
				myStack.pop();
			}
			myStack.pop();

		} else {
			while (!myStack.empty() && myFunc(s[i]) <= myFunc(myStack.top())) {
				result += myStack.top();
				myStack.pop();
			}
			myStack.push(character);
		}
	}
	while (!myStack.empty()) {
		result += myStack.top();
		myStack.pop();
	}

	std::cout << result << std::endl;
}

int main()
{
	std::string myExpression = "A*(B+C)/D";
	reverse(myExpression);
	return 0;
}

