#include <iostream>
#include <string.h>
#include "europe.h"
#include "person_data.h"
using namespace std;

class africa:public continent
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
    float total_cost_africa;
public:
    void choice();
    void getdata();
    void showdata();
    void calc_cost();
    float totalcost(){return total_cost_africa;}

    void create_africa();
    void delete_data_africa();
    void modify_africa();
    void display_africa();
};


