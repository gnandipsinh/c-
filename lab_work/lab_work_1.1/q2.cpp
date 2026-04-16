<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter the first number: ";
    cin >> start;

    cout << "Enter the second number: ";
    cin >> end;

  
    int leapYears[1000];
    int count = 0;

    for (int year = start; year <= end; year++)
    {
     
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            leapYears[count] = year;
            count++;
        }
    }


    cout << "The array is: \n";
    for (int i = 0; i < count; i++)
    {
        cout << leapYears[i];
        if (i < count - 1)
            cout << ", ";
    }

    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter the first number: ";
    cin >> start;

    cout << "Enter the second number: ";
    cin >> end;

  
    int leapYears[1000];
    int count = 0;

    for (int year = start; year <= end; year++)
    {
     
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            leapYears[count] = year;
            count++;
        }
    }


    cout << "The array is: \n";
    for (int i = 0; i < count; i++)
    {
        cout << leapYears[i];
        if (i < count - 1)
            cout << ", ";
    }

    return 0;
>>>>>>> 93ea32a37ee51989794f2dd25e9fa21f4d53d698
}