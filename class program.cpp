#include <iostream>
using namespace std;
class Student
{
	public:
	    static int x;
	    Student()
	    {
	    	x++;
		}
};
int Student::x=0;
main()
{
	Student s1, s2, s3;
	
	cout<<"value of x: "<<Student::x;
}
