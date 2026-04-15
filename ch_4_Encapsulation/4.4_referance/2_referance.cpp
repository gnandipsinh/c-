#include <iostream>
using namespace std;
void changenumbervalue(int &num)
{
    num = 60;
}

int main()
{

    int num= 20;

    changenumbervalue(num);

    cout << "num value " << num << endl;

    return 0;
}