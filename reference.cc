////
///@date   2016-04-16 14:55:54
///
 
 
 
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int>A;
	for(int i=0;i<10;i++)
	{
		A.insert(A.begin(),i);
	}

//	A.insert(A.end(),0);

	vector<int>::iterator p;
	
	for(p=A.begin();p<A.end();p++)
	{
		if(*p==0)
			A.erase(p);
	}

//	A.erase(5);

	for(int i=0;i<9;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}

