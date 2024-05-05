#include <iostream>
#include <string.h>
#include "continent.h"
using namespace std;

class asia:public continent
{
protected:
    char departure_place[20];
    char arrival_place[20];
    float flight_charge;
    float currency;
    char transport[20];
    float transport_cost;
    char hotel_name[20];
    float hotel_charge;
    float total_cost_asia;
public:
    void choice(); //user
    void getdata();
    void showdata();
    void calc_cost();
    float totalcost_asia(){return total_cost_asia;}

    void create_asia();
    void delete_data_asia();
    void modify_asia();
    void display_asia();
};

