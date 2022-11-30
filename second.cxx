#include <iostream>
#include <vector>

std::vector<std::string> re( const std::string s, std::vector<std::string> result = {} )
{
  for (std::string::size_type i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) {
      result.push_back(s);
    }
  }
  return result;
}

void funny_test(const std::string s) {
  for (std::string::size_type i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) {
		std::cout << "It's right |*_*| &#129395 "  << s << "|" << i << " index is: " << "PASS" << std::endl;
    }else{
		std::cout << "It's right |*_*| &#129395 "  << s << "|" << i << " index is: " << "FAIL" << std::endl;
	}		
  	}
}

void test(const std::string s) {
  for (std::string::size_type i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) {
        std::cout << s << std::endl;
    } 
  }
}
void general() {
  
  std::cout << "Write funny_test or test string in input: ";
  std::string userInput;
  std::cin >> userInput;
  std::vector<std::string> res = {};  
  std::vector<std::string> result = {};
  std::vector<std::string> my = { "Hello", "1student", "bestfriends4ever", "bye" };
  for ( int i = 0; i < my.size(); i++ ) 
  {
  	res = re(my[i]);
  	for(int i = 0; i < res.size(); i++) 
  	{
			if ( userInput == "funny_test" ) {
  				funny_test( res[i] );
			}else if( userInput == "test" ) {
				test( res[i] );
			}else{
				std::cout << "Enter right! " << std::endl;
				std::cout << "Write again " << std::endl;
				std::cin >> userInput;
			}

	}	
	

  }
}

int main() 
{
	general();
}
