#include <iostream>
using namespace std;

class employee
{
private:
    string name;

public:
    void setname(string name)
    {
        this->name = name;
    }

    void getname()
    {
        cout << "Employee Name: " << name << endl;
    }
};

class manager : public employee
{
protected:
    int salary;

public:
    void SetEmployeeSalary(int salary)
    {
        this->salary = salary;
    }

    void GetSalary()
    {
        cout << "Set Employee salary: " << salary << endl;
    }
};

class owner : public manager
{
public:
    void ChangeSalary(int salary)
    {
        this->salary = salary;
    }

    void Changesalary()
    {
        cout << "Change Employee salary: " << salary << endl;
    }
};

int main()
{
    owner obj;

    obj.setname("Gohil");
    obj.getname();

    obj.SetEmployeeSalary(50000);

    obj.GetSalary();

    obj.ChangeSalary(60000);

    obj.Changesalary();

    return 0;
}