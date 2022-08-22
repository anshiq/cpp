#include <bits/stdc++.h>
using namespace std;
class sstack
{
	int sizee;
	queue<int> q1; // push method is costly in method 1.
	queue<int> q2;

public:
	sstack()
	{
		sizee = 0;
	}
	void push(int val)
	{
		q2.push(val);
		sizee++;
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}

		queue<int> temp = q1;
		q1 = q2; // swapping or reversing both queues with each other.
		q2 = temp;
	}
	void pop()
	{
		q1.pop();
		sizee--;
	}
	int top()
	{
		return q1.front();
	}
};
int main()
{
	sstack st;
	st.push(1);
	st.push(2);
	cout << st.top()<<"\n";
	st.pop();
	cout << st.top();
}
