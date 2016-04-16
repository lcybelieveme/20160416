///
///@date   2016-04-16 14:43:52
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int new1()
{
	int *a=new int[10];
	
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	delete []a;
	return 0;
}


