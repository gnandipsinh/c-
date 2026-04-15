#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate;

public:
    void setRate(float r)
    {
        rate = r;
    }
};

class SBI : public RBI
{
public:
    void getROI()
    {
        cout << "SBI Interest Rate: " << rate << "%" << endl;
    }
};


class BOB : public RBI
{
public:
    void getROI()
    {
        cout << "BOB Interest Rate: " << rate << "%" << endl;
    }
};

class ICICI : public RBI
{
public:
    void getROI()
    {
        cout << "ICICI Interest Rate: " << rate << "%" << endl;
    }
};

int main()
{
    SBI s;
    BOB b;
    ICICI i;

    s.setRate(6.5);

    b.setRate(7.0);
    
    i.setRate(6.8);

    s.getROI();
    b.getROI();
    i.getROI();

    return 0;
}