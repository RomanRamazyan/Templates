#include <iostream>
#include <vector>

template <typename T>
T myFunc( std::vector<T> first, std::vector<T> second )
	{
	for( int i = 0; i<first.size(); i++) 
	{
		for( int j = 0; j < second.size(); j++ ) 
		{
			if( first[i] == second[j] ) 
			{
				std::cout << "first vector " << second[i] << " coincides in " << "second vector" << std::endl;
			}
		}
	}
return 0;
}

int main() 
{
std::vector<int> first = { 1, 8, 3, 4 };
std::vector<int> second = { 4, 3, 2, 1 };
std::vector<float> fl = { 1.5, 7.8, 9.11, 8.4 };
std::vector<float> fl1 = { 8.4, 7.8, 4.7, 9.9 };
std::vector<char> ch = { 'a', 'b', 'c', 'd' };  
std::vector<char> ch1 = { 'h', 'r', 'b', 'd' };	
myFunc( first, second );
myFunc( fl, fl1 );
myFunc( ch, ch1 );
return 0;
}
