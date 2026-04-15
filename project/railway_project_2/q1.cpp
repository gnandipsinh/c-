#include <iostream>
#include <string>
using namespace std;

class train
{
private:
    int train_Number;
    string train_Name;
    string train_source;
    string train_destination;
    string train_Time;

public:
    train()
    {
        train_Number = 0;
        train_Name = "no set";
        train_source = "no set";
        train_destination = "no set";
        train_Time = "no time";
    }

    train(int num, string name, string source, string destination, string time)
    {
        train_Number = num;
        train_Name = name;
        train_source = source;
        train_destination = destination;
        train_Time = time;
    }

    train(const train &t)
    {
        train_Number = t.train_Number;
        train_Name = t.train_Name;
        train_source = t.train_source;
        train_destination = t.train_destination;
        train_Time = t.train_Time;
    }

    int getID() const
    {
        return train_Number;
    }

    void setTrainDetail()
    {
        cout << "\nEnter Train Number: ";
        cin >> train_Number;
        cin.ignore(); // clear buffer

        cout << "Enter Train Name: ";
        getline(cin, train_Name);

        cout << "Enter Source: ";
        getline(cin, train_source);

        cout << "Enter Destination: ";
        getline(cin, train_destination);

        cout << "Enter Train Time (e.g., 10am): ";
        getline(cin, train_Time);
    }

    void getTrainDetail() const
    {
        cout << "\nTrain Number: " << train_Number << endl;
        cout << "Train Name: " << train_Name << endl;
        cout << "Source: " << train_source << endl;
        cout << "Destination: " << train_destination << endl;
        cout << "Train Time: " << train_Time << endl;
    }
};

class RailwayRecordManager
{
private:
    train trains[5];
    int count;

public:
    RailwayRecordManager()
    {
        count = 0;
    }

    void addTrain()
    {
        if (count < 5)
        {
            trains[count].setTrainDetail();
            count++;
        }
        else
        {
            cout << "\nTrain limit reached!\n";
        }
    }

    void displayAll()
    {
        if (count == 0)
        {
            cout << "\nNo train records available!\n";
            return;
        }

        for (int i = 0; i < count; i++)
        {
            trains[i].getTrainDetail();
        }
    }

    void searchTrain(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (trains[i].getID() == id)
            {
                cout << "\nTrain Found:\n";
                trains[i].getTrainDetail();
                return;
            }
        }
        cout << "\nTrain not found!\n";
    }
};

int main()
{
    RailwayRecordManager manager;
    int choice, id;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Add Train\n";
        cout << "2. Display All Trains\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            manager.addTrain();
            break;

        case 2:
            manager.displayAll();
            break;

        case 3:
            cout << "Enter Train Number to search: ";
            cin >> id;
            manager.searchTrain(id);
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}