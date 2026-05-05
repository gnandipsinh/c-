#include <iostream>
using namespace std;

class bank
{
public:
    virtual void payment() = 0;



};


class upi:public bank
{
private:
 
public:

void payment (){

    cout<<"payment by upi "<<endl;


}

};


class card:public bank
{
    public:

    void payment()
    {
        cout<<"payment by card "<<endl;
    }

};


int main()
{

    bank *b;

    upi u;
    card  c;

    b=&u;
    b->payment();

    b=&c;
    b->payment();


    return 0;
}
