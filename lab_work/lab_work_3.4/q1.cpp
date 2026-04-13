
#include <iostream>
#include <vector>
using namespace std;


class Student
{

private:

    string stu_name;

    int stu_roll;

    float stu_GPA;  

public:
    Student()
    {
        stu_name = "name";

        stu_roll = 0;

        stu_GPA = 0.0;

    }

    Student(string n, int r, float g)
    {


        stu_name = n;

        stu_roll = r;

        stu_GPA = g;

    }

    Student(const Student &s)
    {

        stu_name = s.stu_name;

        stu_roll = s.stu_roll;

        stu_GPA = s.stu_GPA;
    }

    string GetName() const
    {
        return stu_name;
    };

    int GetRoll() const
    {
        return stu_roll;
    };

    float GetGPA() const
    {
        return stu_GPA;
    }

    void Display()
    {

        cout << "\nName    :" << stu_name;

        cout << "\nRoll No :" << stu_roll;

        cout << "\nGPA     :" << stu_GPA;

    }

    ~Student()
    {

        cout << "\ncalled object destroyed\n"
             << endl;
    }
};

class StudentManager
{

private:
    vector<Student> Students;

public:
    void addStudent(const Student &obj)
    {

        Students.push_back(obj);

        cout << "Student add" << endl;

    }

    void DisplayStudent()
    {

        if (Students.empty())
        {
            cout << "No Student" << endl;

        }

        else
        {
            for (int i = 0; i < Students.size(); i++)
            {
                Students[i].Display();

            }
        }
    }

    void SearchRoll(int stu_roll)
    {

        for (int i = 0; i < Students.size(); i++)
        {
            if (Students[i].GetRoll() == stu_roll)
            {
                cout << "Student found" << endl;

                Students[i].Display();


                return;
            }
        }

        cout << "Student not found roll no" << endl;
    }
};

int main()
{

    Student s1("gohil", 1, 10.10);


    Student s2("gnandipsinh", 2, 34.12);


    StudentManager Admin;


    Admin.addStudent(s1);


    Admin.addStudent(s2);


    cout << "Student all data" << endl;

    Admin.DisplayStudent();

    cout << "finding  roll no " << endl;

    Admin.SearchRoll(2);

    return 0;
}
