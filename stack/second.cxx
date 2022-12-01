#include <iostream>
#include <stack>

class Solution
{
public:
  bool isValid(std::string s)
  {
    std::stack<char> myStack;
    myStack.push('S');
    for(int i = 0; i< s.length(); i++)
    {
        if( s[i] == '(' || s[i] == '{' || s[i] == '[' )
		{
            myStack.push(s[i]);
        }else if ((myStack.top() == '(' && s[i] == ')') || (myStack.top() == '{' && s[i] == '}') || (myStack.top() == '[' && s[i] == ']')) 
		{
        myStack.pop();
        }else{
            myStack.push(s[i]);
		}
    }
    if(myStack.size() != 1)
	{
        return false;
	}else{
 	   	return true;
	}
   }
};

int main() 
{
	Solution obj1;
	std::string myString = "()";
	std::cout << "() is: " << obj1.isValid(myString) << std::endl;
	myString = "()[]{}";
    std::cout << "()[]{} is: " << obj1.isValid(myString) << std::endl;
    myString = "(]";
    std::cout << "(] is: " << obj1.isValid(myString) << std::endl;

	return 0;
}
