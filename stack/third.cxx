#include <bits/stdc++.h>

void insert_at_bottom(stack<int>& st, int x)
{

	if (st.size() == 0) {
		st.push(x);
	}
	else {


		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);

		int x = st.top();
		st.pop();
		reverse(st);

		insert_at_bottom(st, x);
	}
	return;
}

int main()
{
	stack<int> st, st2;
	for (int i = 1; i <= 4; i++) {
		st.push(i);
	}

	st2 = st;

	std::cout << "Original Stack" << std::endl;
	while (!st2.empty()) {
		std::cout << st2.top() << " ";
		st2.pop();
	}
	std::cout<<std::endl;
	reverse(st);
	std::cout << "Reversed Stack" << std::endl;
	while (!st.empty()) {
		std::cout << st.top() << " ";
		st.pop();
	}
	return 0;
}

