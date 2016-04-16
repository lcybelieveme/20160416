///
///@date   2016-04-16 23:08:59
///
 
 
 
#include <iostream>
#include <stack>

using std::stack;
using std::cin;
using std::cout;
using std::endl;

class que
{
	private:
		stack<int> stack1,stack2;
	public:
		void push(int node)
		{
			stack1.push(node);
		}
		int pop()
		{
			if(stack2.empty())
			{
				if(stack1.empty())
				{
					cout<<"empty que"<<endl;
					return -1;
				}
				else{
					while(!stack1.empty())
					{
						stack2.push(stack1.top());
						stack1.pop();
					}
				}
				int temp=stack2.top();
				stack2.pop();
				return temp;
			}
			else
			{
					int temp;
					temp=stack2.top();
					stack2.pop();
					return temp;
			}
		}
};

int main()
{
	que que1;
	que1.push(1);
	cout<<que1.pop();
	return 0;
}
