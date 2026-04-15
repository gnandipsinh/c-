#include <iostream>
using namespace std;

class timeconverter
{
public:
    void SecondToTime(int totalSecond)
    {
        int hour, minutes, second;

        hour = totalSecond / 3600;

        minutes = (totalSecond % 3600) / 60;

        second = totalSecond % 60;

        cout << "HH : MM : SS = "
             << hour << ":"
             << minutes << ":"
             << second << endl;
    }

    void timeToSeconds(int hours, int minutes, int seconds)
    {
        int totalSeconds;

        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main()
{
    timeconverter t1;
    int choice;

    while (true)
    {
        cout << "\nTime Converter Program\n";

        cout << "1. Seconds to HH:MM:SS\n";

        cout << "2. HH:MM:SS to Seconds\n";

        cout << "3. Exit\n";

        cout << "Enter choice: ";

        cin >> choice;

        if (choice == 1)
        {
            int second;

            cout << "Enter seconds: ";

            cin >> second;

            t1.SecondToTime(second); 
        }
        else if (choice == 2)
        {
            int hour, minutes, second;
            cout << "Enter hours: ";

            cin >> hour;

            cout << "Enter minutes: ";

            cin >> minutes;

            cout << "Enter seconds: ";

            cin >> second;

            t1.timeToSeconds(hour, minutes, second);
        }
        else if (choice == 3)
        {
            cout << "Program exited.\n";
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}