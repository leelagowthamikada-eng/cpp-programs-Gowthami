#include <iostream>
using namespace std;
class Student{
		static int count;
		public:
		static void display() 
		{
			cout<<"vlaue of count is: "<<count;
		}
};
int Student::count=5;
main()
{
	Student::display();
}
