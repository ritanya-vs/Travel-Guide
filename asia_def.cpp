#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <typeinfo>
#include "africa.h"

using namespace std;
asia a;
void asia::getdata()
{
    system("cls");
    a.continent::read_package();
    cout<<endl<<"\t\t\t\t\t\tFLIGHT DETAILS: "<<endl;
    cout<<endl<<"\t\t\t\t\t\tEnter Departure Place:";
    cin>>departure_place;
    cout<<"\t\t\t\t\t\tEnter Arrival Place:";
    cin>>arrival_place;
    cout<<"\t\t\t\t\t\tEnter Flight Charge: ";
    cin>>flight_charge;
    //cout<<endl<<"Enter Currency Value for Rs.1:";
    //cin>>currency;
    cout<<endl<<"\t\t\t\t\t\tTRANPORTATION DETAILS"<<endl;
    cout<<endl<<"\t\t\t\t\t\tEnter the within city transportation mode:";
    cin>>transport;
    cout<<"\t\t\t\t\t\tCost of Intra-City Transportation:";
    cin>>transport_cost;
    cout<<endl<<"\t\t\t\t\t\tHOTEL DETAILS:"<<endl;
    cout<<endl<<"\t\t\t\t\t\tEnter Hotel Name:";
    cin>>hotel_name;
    cout<<"\t\t\t\t\t\tEnter Hotel Charge(per day):";
    cin>>hotel_charge;
}

void asia::calc_cost()
{
    total_cost_asia = flight_charge + transport_cost + hotel_charge ;
}

void asia::showdata()
{
    asia::calc_cost();
    cout<<endl<<"\t\t\t\t\t\t\t"<<package<<endl;
    cout<<endl<<"\t\t\t\t\t\tFLIGHT DETAILS:"<<endl;
    cout<<endl<<"\t\t\t\t\t\t|Departure place:"<<departure_place<<endl;
    cout<<"\t\t\t\t\t\t|Arrival Place:"<<arrival_place<<endl;
    cout<<"\t\t\t\t\t\t|Flight Charge:"<<flight_charge<<endl;
    //cout<<"Currency Value for Rs.1:"<<currency<<endl;
    cout<<endl<<"\t\t\t\t\t\tTRANSPORTATION DETAILS:"<<endl;
    cout<<endl<<"\t\t\t\t\t\t|Within city transportation mode:"<<transport<<endl;
    cout<<"\t\t\t\t\t\t|Intra-city transportation cost:"<<transport_cost<<endl;
    cout<<endl<<"\t\t\t\t\t\tHOTEL DETAILS:"<<endl;
    cout<<endl<<"\t\t\t\t\t\t|Hotel name:"<<hotel_name<<endl;
    cout<<"\t\t\t\t\t\t|Hotel charge per day:"<<hotel_charge<<endl;
    cout<<endl<<"\t\t\t\t\t\t--- TOTAL AMOUNT :"<<total_cost_asia<<" ---"<<endl;
    //cout<<typeid(total_cost).name();
    cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}

void asia::create_asia()
{
    int n,i;
    fstream f;
    cout<<endl<<"\t\t\t\t\t\tEnter the no. of package details you want to create:";
    cin>>n;
    f.open("ASIA.txt",ios::binary|ios::app);
    for(i=0;i<n;i++)
    {
        a.getdata();
        f.write((char *)&a,sizeof(a));
    }
    f.close();
    cout<<endl<<"\t\t\t\t\t\tData created successfully"<<endl;
}

void asia::delete_data_asia()
{
    char n[20];
    cout<<endl<<"\t\t\t\t\t\tEnter the name of the tour package you want to delete:";
    cin>>n;
    fstream f,t;
    f.open("ASIA.txt",ios::in|ios::binary);
    t.open("TEMP.txt",ios::out|ios::binary);
    while(f.read((char *)&a,sizeof(a)))
    {
            if(strcmp(n,a.package_name()) != 0)
            {
                t.write((char *)&a,sizeof(a));
            }
    }
    cout<<endl<<"\t\t\t\t\t\tDeleted Successfully"<<endl;
    f.close();
    t.close();
    remove("ASIA.txt");
    rename("TEMP.txt","ASIA.txt");
}

void asia::modify_asia()
{
    int pos;
    char n[20];
    cout<<endl<<"\t\t\t\t\t\tEnter the name of the tour package to be modified:";
    cin>>n;
    fstream f;
    f.open("ASIA.txt",ios::in|ios::out|ios::binary);
    while(f.read((char *)&a,sizeof(a)))
    {
        pos = f.tellp();
        if(strcmp(n,a.package_name()) == 0)
        {
            cout<<endl<<"\t\t\t\t\t\tEnter the details to be modified:"<<endl;
            a.getdata();
            f.seekp(pos - sizeof(a));
            f.write((char *)&a,sizeof(a));
        }
    }
    cout<<endl<<"\t\t\t\t\t\tModified successfully"<<endl;
    f.close();
}

void asia::display_asia()
{
    fstream f;
    f.open("ASIA.txt",ios::in|ios::binary);
    f.seekg(0,ios::beg);
    while(f.read((char *)&a,sizeof(a)))
    {
        a.showdata();
    }
    f.close();
}

