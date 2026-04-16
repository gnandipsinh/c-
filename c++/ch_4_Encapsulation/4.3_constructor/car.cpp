#include <iostream>
using namespace std;

class car
{
private:
    string *color;

    string *carname;

public:
    // car()
    // {
    //     cout << "car name is " << carname << " and car color is " << color << endl;
    // }

    car()
    {
        color = new string;
        carname = new string;
        
        cout << "car name is:  " << endl;
        cin >> *carname;

        cout << "car color is:  " << endl;
        cin >> *color;
    }

    ~car()
    {
        cout << "call function" << endl;
    }

    void displaydata()
    {
        cout << "car name is:  " << *carname << endl;
        cout << "car color is:  " << *color << endl;
    }
};

int main()
{

    car c1;
    c1.displaydata();

    return 0;
}
