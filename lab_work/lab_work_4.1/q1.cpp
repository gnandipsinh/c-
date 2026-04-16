<<<<<<< HEAD
#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c;
};

class Y : public X
{
public:
    void setData()
    {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }

    void getData()
    {
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "Sum of cubes = " << sum << endl;
    }
};

int main()
{
    Y obj;
    
    obj.setData();

    obj.getData();

    return 0;
=======
#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c;
};

class Y : public X
{
public:
    void setData()
    {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }

    void getData()
    {
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "Sum of cubes = " << sum << endl;
    }
};

int main()
{
    Y obj;
    
    obj.setData();

    obj.getData();

    return 0;
>>>>>>> 93ea32a37ee51989794f2dd25e9fa21f4d53d698
}