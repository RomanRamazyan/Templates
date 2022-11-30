#include <iostream>
#include <vector>

void my_func() {
    std::vector<int> members = {}; 
    int size = 0;
    int i;
    std::vector<int> m_vector = { 4, 5, 2, 7, 9 };
    for(i = 0; i<m_vector.size()-1; i++) 
    {
        if( ( m_vector[i] <= m_vector[i-1] ) and ( m_vector[i] <= m_vector[i+1] ))
        {   
            members.push_back(m_vector[i]);
            size+=1;
        }   
    }   
    for( i = 0; i < size; i++ ) { 
        std::cout << members[i] << std::endl;
    }	

}

int main() {
	my_func();
	return 0;
}
