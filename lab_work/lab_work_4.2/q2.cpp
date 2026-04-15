#include <iostream>
using namespace std;


class A
{
protected:
    int a;

public:
    A(int x)
    {
        a = x;
    }
};

class B : public A
{
protected:
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    }
};
class C
{
protected:
    int c;

public:
    C(int z)
    {
        c = z;
    }
};

class D : public B, public C
{
    int d;

public:
    D(int w, int x, int y, int z) : B(x, y), C(z)
    {
        d = w;
    }

    void sum()
    {
        int total = a + b + c + d;
        cout << "Sum of four numbers: " << total << endl;
    }
};

int main()
{
    D obj(10, 20, 30, 40);
    obj.sum();

    return 0;
}