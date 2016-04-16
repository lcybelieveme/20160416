///
///@date   2016-04-16 14:32:12
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#ifdef __cplusplus
extern "C"
{
#endif
	int add(int a,int b,int c=0)
	{
		return a+b+c;
	}
#ifdef __cplusplus
}
#endif

int main()
{
	int a=10;
	int b=11;
	int c=12;
	cout<<add(a,b,c)<<endl;
	cout<<add(a,b)<<endl;
	return 0;
}
