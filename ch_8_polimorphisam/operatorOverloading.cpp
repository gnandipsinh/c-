#include<iostream>
using namespace std;

class number
{
    
public:
int num;
    number(int n)
    {
        num = n;
    }
    
};

number operator + (number n1, number n2)
{
    return number(n1.num + n2.num);
}

int main()
{
    number n1(5);
    number n2(10);

    // is not working because of the return type of the operator function is not working;
    // cout << "The sum is: " << n3.num << endl;
    
    return 0;
}

