///
///@date   2016-04-16 21:58:02
///
 
 
 
#include <iostream>
#include <vector>
using namespace std;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

struct node
{
	int ele;
	struct node*left;
	struct node*right;
};

node* reconbintree(vector<int>a,vector<int>b)
{
	if(a.size()==0) return NULL;
	node*head=new node;
	vector<int> af,al,bf,bl;
	head->ele=a[0];
	int flag=0;
	for(int i=0;i<b.size();i++)
	{
		if(b[i]==a[0])
		{
			flag=1;
			continue;
		}
		if(flag==0)
		{
			af.insert(af.end(),a[i+1]);
			bf.insert(bf.end(),b[i]);
		}
		else
		{
			al.insert(al.end(),a[i]);
			bl.insert(bl.end(),b[i]);
		}
	}
	head->left=reconbintree(af,bf);
	head->right=reconbintree(al,bl);
	return head;
}

void fun(node*head)
{
	if(head==NULL)return;
	cout<<head->ele<<" ";
	fun(head->left);
	fun(head->right);
}


int main()
{
	vector<int> a{1,2,4,7,3,5,6,8};
	vector<int> b{4,7,2,1,5,3,8,6};

	node*head;
	head=reconbintree(a,b);

	fun(head);


	return 0;
}
