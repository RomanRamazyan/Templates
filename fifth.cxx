#include "iostream"
#define ll long long

template <typename D>
class MyVector {
private:
	D* arr;

	ll capacity;

	ll length;

public:
	MyVector(ll = 100);

	ll push_back(D);
	ll clear(D);

	D pop_back();

	ll size() const;
	class iterator {
	private:
		D* ptr;
	};
};

template <typename D>
MyVector<D>::MyVector(ll n)
	: capacity(n), arr(new D[n]), length(0)
{
}

template <typename D>
ll MyVector<D>::push_back(D data)
{
	if (length == capacity) {
		D* old = arr;
		arr = new D[capacity = capacity * 2];
		std::copy(old, old + length, arr);
		delete[] old;
	}
	arr[length++] = data;
	return length;
}

template <typename D>
D MyVector<D>::pop_back()
{
	return arr[length-- - 1];
}

template <typename D>
ll MyVector<D>::size() const
{
	return length;
}

int main()
{
	std::cout << "For Integer data_type" << std::endl;
	MyVector<int> v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	MyVector<int>::iterator it;
	std::cout << "size: " << v.size() << std::endl;
	std::cout << "Pop: " << v.pop_back() << std::endl;
	std::cout << "For Pop data_type" << std::endl;
	
	MyVector<float> c;
	c.push_back(5.7);
	c.push_back(4.2);
	c.push_back(8.2);
	c.push_back(1.2);
	c.push_back(5.2);
	c.push_back(7.2);
	c.push_back(5.2);
	c.push_back(6.2);
	MyVector<float>::iterator it1;
	
	std::cout << "size: " << c.size() << std::endl;

	std::cout << "Pop: " << c.pop_back() << std::endl;
	return 0;
}

