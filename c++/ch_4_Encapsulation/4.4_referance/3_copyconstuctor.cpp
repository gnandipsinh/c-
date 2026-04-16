#include <iostream>
using namespace std;

class student
{
private:
    int Rollno;
    string name;

public:
    student(int rollno, string name)
    {
        this->Rollno = rollno;
        this->name = name;
    }
    
    student(const student &s)
    {
        Rollno = s.Rollno;
        name = s.name; 
    }

    void DispalyStudentDetails()
    {
        cout << "student name is " << name << " and their roll no is " << Rollno << endl;
    }
};

int main()
{
    student s1(101, "gohil");

    s1.DispalyStudentDetails();

    student s2 = s1;

    return 0;
}