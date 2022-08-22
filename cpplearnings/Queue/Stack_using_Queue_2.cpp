#include <bits/stdc++.h>
using namespace std;
class sstack
{
	int sizee;
	queue<int> q1;
	queue<int> q2;

public:
	sstack()
	{
		sizee = 0;
	}
	void pop()
	{
		if (q1.empty())
		{
			return;
		}
		while (q1.size() != 1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();
		sizee--;
		queue<int> temp = q1;
		q1 = q2; // in method 2 pop is costly than push.
		q2 = temp;
	}
	void push(int val)
	{
		q1.push(val);
		sizee++;
	}
	int top()
	{
		if (q1.empty())
			return -1;

		while (q1.size() != 1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		int ans = q1.front();
		q2.push(ans);
		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;
		return ans;
	}
};
int main() {
sstack st;
st.push(2);
st.push(23);
st.push(6);
cout<< st.top()<<endl;
st.push(8);
st.push(12);
cout<<st.top();

}
