#include <iostream>
#include <string.h>
#include "asia.h"
using namespace std;

class europe:public continent
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
    float total_cost_europe;
public:
    void choice();
    void getdata();
    void showdata();
    void calc_cost();
    float totalcost(){return total_cost_europe;}

    void create_europe();
    void delete_data_europe();
    void modify_europe();
    void display_europe();
};


