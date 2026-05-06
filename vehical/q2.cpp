#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
    protected:
    int Vehicle_id;
    string Vehicle_manufacturer;
    string Vehicle_model;
    int Vehicle_year;


    public:

    static int totalVehicleNumber;

    Vehicle()
    {
        Vehicle_id=0;
        year=0;
    }

    vehicle(int id ,string manufacturer,string model,int year)
    {
        Vehicle_id=id;
        Vehicle_manufacturer=manufacturer;
        Vehicle_model=model;
        Vehicle_year=year;
    }
    
    virtual ~vehicle()
    {}

    void setVehicle_id(int id)
    {
        if(id>0)
        Vehicle_id=id;
    }

    int getVehicle_id()
    {
        return Vehicle_id;
    }

    void setVehicle_Manufacturer()
    (
        Vehicle_manufacturer=manufacturer;
    )

    string getVehicale_Manufacturer()
    {
        return manufacturer;
    }

    virtual void display()
    {
        return manufacturer;
    }

    virtual void display() const
    {
        cout<<"id: "<<Vehicle_id<<endl;
        cout<<"manufacture: "<<Vehicle_manufacturer<<endl;
        cout<<"model:"<<Vehicle_model<<endl;
        cout<<"year:"<<Vehicle_year<<endl;


    }



};

int vehicle::totalVehicleNumber=0;

class car:public vehicle
{

    protected:
    string fuelType;

    public:
    

}

