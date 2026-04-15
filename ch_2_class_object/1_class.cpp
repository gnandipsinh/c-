#include <iostream>
using namespace std;

class student
{

public:
    string name;
    string course;
    string grade;

    void studentDetaills(string n, string c, string g)
    {
        name = n;
        course = c;
        grade = g;
    }

    void displayStudentInfo()
    {
        cout << "student name is " << name << endl;
        cout << "student course is " << course << endl;
        cout << "student grade is " << grade << endl;
    }
};

int main()
{

    student s1;

    s1.studentDetaills("gohil" ,"fsd","A");

    s1.displayStudentInfo();

    return 0;
}
