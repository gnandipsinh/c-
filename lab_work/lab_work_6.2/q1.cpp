#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void calculate() = 0;
};

class Circle : public Shape
{
    float r;

public:
    Circle(float radius)
    {
        r = radius;
    }

    void calculate()
    {
        cout << "Circle Area: " << 3.14 * r * r << endl;
    }
};

class Triangle : public Shape
{
    float h, b;

public:
    Triangle(float height, float base)
    {
        h = height;
        b = base;
    }

    void calculate()
    {
        cout << "Triangle Area: " << 0.5 * b * h << endl;
    }
};

class Rectangle : public Shape
{
    float l, w;

public:
    Rectangle(float length, float width)
    {
        l = length;
        w = width;
    }

    void calculate()
    {
        cout << "Rectangle Area: " << l * w << endl;
    }
};

int main()
{
    Shape *obj;

    Circle c(100);
    Triangle t(100, 200);
    Rectangle r(100, 200);

    obj = &c;
    obj->calculate();

    obj = &t;
    obj->calculate();

    obj = &r;
    obj->calculate();

    return 0;
}