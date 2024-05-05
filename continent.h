#include <iostream>
#include <string.h>
using namespace std;
class continent
{
protected:
    char package[20];
public:
    void read_package()
    {
        cout<<"\t\t\t\t\t\tEnter package name:";
        cin>>package;
    }
    char* package_name(){return package;}
};


