#include<iostream>
using namespace std;
class parent
{
	public:
		void showparent()
		{
			cout<<"This is parent class"<<endl;
		}
};

class child:virtual public parent
{
	public:
		void showchild()
		{
			cout<<"This is child class"<<endl;
		}
};
main()
{
	char child;
	
	
}
