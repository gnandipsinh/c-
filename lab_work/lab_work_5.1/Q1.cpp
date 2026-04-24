#include <iostream>
using namespace std;

class Calculator
{
public:
    virtual void showInfo()
    {
        cout << "This is a basic calculator" << endl;
    }
};

class AdvancedCalculator : public Calculator
{
public:
    void calculate(int a, int b)
    {
       
        cout << "Division Result: " << a / b << endl;
    }

    void calculate(int a, int b, int c)
    {
        cout << "Subtraction Result: " << a - b - c << endl;
    }

    void calculate(int a, int b, int c, int d)
    {
        cout << "Multiplication Result: " << a * b * c * d << endl;
    }

    void calculate(int a, int b, int c, int d, int e)
    {
        cout << "Addition Result: " << a + b + c + d + e << endl;
    }
};

int main()
{
    AdvancedCalculator obj;

    obj.showInfo();

    obj.calculate(50, 20);
    obj.calculate(50, 12, 13);
    obj.calculate(10, 10, 10, 10);
    obj.calculate(10, 10, 10, 10, 10);

    return 0;
}