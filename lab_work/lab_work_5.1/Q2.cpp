#include <iostream>
using namespace std;

class Cricket
{
public:
    virtual void getTotalOvers()
    {
        cout << "Cricket match overs information" << endl;
    }
};

class T20Match : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << "T20 Match: 20 Overs" << endl;
    }
};

class TestMatch : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << "Test Match: 90 Overs per day" << endl;
    }
};

class ODIMatch : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << "ODI Match: 50 Overs" << endl;
    }
};

int main()
{
    Cricket *c;

    T20Match t20;
    TestMatch test;
    ODIMatch odi;

    cout << "----- T20 Match -----" << endl;
    c = &t20;
    c->getTotalOvers();

    cout << "\n----- Test Match -----" << endl;
    c = &test;
    c->getTotalOvers();

    cout << "\n----- ODI Match -----" << endl;
    c = &odi;
    c->getTotalOvers();

    return 0;
}