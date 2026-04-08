#include <iostream>
using namespace std;

class Hotel
{
private:
    int hotel_id;

    string hotel_name;

    string hotel_type;

    int hotel_rating;

    string hotel_location;

    int hotel_establish_year;

    int hotel_staff_quantity;

    int hotel_room_quantity;

public:
    void setData()
    {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;

        cout << "Enter Hotel Name: ";
        cin >> hotel_name;

        cout << "Enter Hotel Type (Hotel/Motel): ";
        cin >> hotel_type;

        cout << "Enter Hotel Rating (1-7): ";
        cin >> hotel_rating;

        cout << "Enter Hotel Location (City): ";
        cin >> hotel_location;

        cout << "Enter Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    void getData()
    {

        cout << "Hotel ID: " << hotel_id << endl;

        cout << "Hotel Name: " << hotel_name << endl;

        cout << "HOtel Type: " << hotel_type << endl;

        cout << "HOtel Rating: " << hotel_rating << " Star" << endl;

        cout << "Hotel Location: " << hotel_location << endl;

        cout << "Hotel Establish Year: " << hotel_establish_year << endl;

        cout << "Hotel Staff Quantity: " << hotel_staff_quantity << endl;

        cout << "HOtel Room Quantity: " << hotel_room_quantity << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel h[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Hotel " << i + 1 << endl;

        h[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        h[i].getData();
    }

    return 0;
}