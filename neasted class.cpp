#include <iostream>
using namespace std;

class Student
{
public:
    class Marks
    {
    public:
        void showMarks()
        {
            cout << "Marks: 95" << endl;
        }
    };
};

int main()
{
    Student::Marks m;
    m.showMarks();

    return 0;
}
