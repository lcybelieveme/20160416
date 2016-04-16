///
///@date   2016-04-16 15:02:43
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int &add(int a,int b)
{
	int *c=new int;
	*c=a+b;
	return *c;
}

int main()
{
	int &c=add(3,4);
	cout<<c;
	delete &c;
	return 0;
}
