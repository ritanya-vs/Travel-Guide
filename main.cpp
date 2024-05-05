#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include "africa.h"
void user();
using namespace std;
int main()
{
    asia a;
    europe e;
    africa afr;
    string username;
    char password[4] = "abc";
    char pw[3],user1;
    int ch,i,j,d,b;
    char z;
    for(d =0;d<=8;d++)
    {
        cout<<endl;
    }
    cout<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\tTRAVEL GUIDE"<<endl<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t|Your Trusted Travel Companion: Let Us Help You Navigate the world with Ease!|"<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t1. ADMINISTRATOR"<<endl;
    cout<<"\t\t\t\t\t\t2. USER"<<endl<<endl;
    do{
    cout<<"\t\t\t\t\t\tEnter your choice:";
    cin>>ch;}while(!(ch == 1 || ch == 2));
    system("cls");
    if(ch == 1)
    {
        for(d =0;d<=7;d++)
        {
            cout<<endl;
        }
        cout<<endl<<"\t\t\t\t\t\t...Access Granted..."<<endl<<endl;
        cout<<"\t\t\t\t\t\tCHOOSE PACKAGE"<<endl<<endl;
        cout<<"\t\t\t\t\t\t  1.ASIA"<<endl;
        cout<<"\t\t\t\t\t\t  2.EUROPE"<<endl;
        cout<<"\t\t\t\t\t\t  3.AFRICA"<<endl<<endl;
        do{
        cout<<"\t\t\t\t\t\tEnter the choice:";
        cin>>i;}while(!(i == 1 || i == 2 || i == 3));
        system("cls");
        if(i == 1)
        {
            do{
                    for(d =0;d<=10;d++)
                    {
                        cout<<endl;
                    }
                    cout<<"\t\t\t\t\t\t1. CREATE TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t2. DELETE TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t3. MODIFY TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t4. DISPLAY"<<endl<<endl;
                    do{
                    cout<<"\t\t\t\t\t\tEnter the option:";
                    cin>>j;}while(!(j == 1 || j == 2 || j == 3 || j == 4));
                    if(j == 1)
                    {
                        a.create_asia();
                    }
                    else if(j == 2)
                    {
                        a.delete_data_asia();
                    }
                    else if(j == 3)
                    {
                        a.modify_asia();
                    }
                    else if(j == 4)
                    {
                        a.display_asia();
                    }
                    cout<<"\t\t\t\t\t\tDo you want to continue?";
                    cin>>z;
                    system("cls");
            }while(z == 'y');
        }
        else if(i == 2)
        {
            do{
                    for(d =0;d<=10;d++)
                    {
                        cout<<endl;
                    }
                    cout<<"\t\t\t\t\t\t1. CREATE TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t2. DELETE TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t3. MODIFY TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t4. DISPLAY"<<endl<<endl;
                    do{
                    cout<<"\t\t\t\t\t\tEnter the option:";
                    cin>>j;}while(!(j == 1 || j == 2 || j == 3 || j == 4));
                    if(j == 1)
                    {
                        e.create_europe();
                    }
                    else if(j == 2)
                    {
                        e.delete_data_europe();
                    }
                    else if(j == 3)
                    {
                        e.modify_europe();
                    }
                    else if(j == 4)
                    {
                        e.display_europe();
                    }
                    cout<<"\t\t\t\t\t\tDo you want to continue?";
                    cin>>z;
                    system("cls");
            }while(z == 'y');
        }
        else if(i == 3)
        {
            do{
                    for(d =0;d<=10;d++)
                    {
                        cout<<endl;
                    }
                    cout<<"\t\t\t\t\t\t1. CREATE TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t2. DELETE TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t3. MODIFY TOUR PACKAGES"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t4. DISPLAY"<<endl<<endl;
                    do{
                    cout<<"\t\t\t\t\t\tEnter the option:";
                    cin>>j;}while(!(j == 1 || j == 2 || j == 3 || j == 4));
                    if(j == 1)
                    {
                        afr.create_africa();
                    }
                    else if(j == 2)
                    {
                        afr.delete_data_africa();
                    }
                    else if(j == 3)
                    {
                        afr.modify_africa();
                    }
                    else if(j == 4)
                    {
                        afr.display_africa();
                    }
                    cout<<"\t\t\t\t\t\tDo you want to continue?";
                    cin>>z;
                    system("cls");
            }while(z == 'y');
        }
    }
    else if(ch == 2)
    {
        for(d =0;d<=7;d++)
        {
            cout<<endl;
        }
        cout<<"\t\t\t\t\t\t...Access Granted..."<<endl<<endl;
        user();
    }
}
