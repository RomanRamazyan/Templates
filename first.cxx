#include <iostream>
template <typename T> class Array 
{
private:
	T* ptr;
	int s;

public:
	Array() {
		int arr[5] = {};
	}
	Array(T arr[], unsigned int n);
	void size();
};

template <typename T> Array<T>::Array(T arr[], unsigned int n)
{
	ptr = new T[n];
	s = n;
	for (int i = 0; i < s; i++)
		ptr[i] = arr[i];
}

template <typename T> void Array<T>::size()
{
	int count = 0;
	for(int i = 0; i < s; i++)
		count++;
	std::cout << "size is: "<< count << std::endl;
	delete ptr;
}
class Complex 
{
	protected:
		int m_real, m_img;
};

class Equal : public Complex
{
    public:
        Equal( int i = 0, int j = 0 ) 
        {m_real = i; m_img = j;} 
        Equal operator = ( Equal const &myObj ) 
        {
            Equal r;
            r.m_real = m_real = myObj.m_real;
            r.m_img = m_img = myObj.m_img;
            return r;
        }
        void print() 
        { std::cout << "Equal is: " << m_real << " + i" << m_img << '\n'; }
};

class DoubleEqual :public Complex
{
    public:
        DoubleEqual( int i = 0, int j = 0 )
        {m_real = i; m_img = j;}
        DoubleEqual operator == ( DoubleEqual const &myObj )
        {
            DoubleEqual r;
            r.m_real = m_real == myObj.m_real;
            r.m_img = m_img == myObj.m_img;
            return r;
        }
        void print()
        { std::cout << "DoubleEqual is: " << m_real << " + i" << m_img << '\n'; }
};

int main() 
{	
	int arr[5] = { 1, 2, 3, 4, 5 };
	Array<int> a(arr, 5);
	a.size();
	Equal b1( 5, 6 ), b2( 20, 8 );
    Equal b3 = b1 = b2;
    b3.print();
	DoubleEqual d1( 20, 8 ), d2( 20, 8 );
    DoubleEqual d3 = d1 == d2;
    d3.print();
	return 0;
}
