#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "africa.h"
using namespace std;

void person_data::get_data()
{
    cout<<endl<<"\t\t\t\t\t\tPERSONAL DETAILS"<<endl<<endl;
    cout<<"\t\t\t\t\t\tEnter your name :";
    cin>>name;
    do{
    cout<<"\t\t\t\t\t\tEnter your age:";
    cin>>age;}while(!(age >= 18));
    do{
    cout<<"\t\t\t\t\t\tEnter your gender(m/f/o):";
    cin>>gender;}while(!(gender == 'f' || gender == 'm' || gender == 'o'));
    do{
    cout<<"\t\t\t\t\t\tEnter your phone number:";
    cin>>phone_no;}while(!(phone_no >= 0));
    cout<<"\t\t\t\t\t\tEnter your email id:";
    cin>>email;
    cout<<"\t\t\t\t\t\tEnter your residential address:";
    cin>>address;
}

void user()
{
    asia a;
    europe e;
    africa afr;
    person_data p;
    p.get_data();
    int ch;
    cout<<"\t\t\t\t\t\tSelect the desired tour package:"<<endl<<endl;
    cout<<"\t\t\t\t\t\t1.ASIA PACKAGE"<<endl;
    cout<<"\t\t\t\t\t\t2.EUROPE PACKAGE"<<endl;
    cout<<"\t\t\t\t\t\t3.AFRICA PACKAGE"<<endl<<endl;
    do{
    cout<<"\t\t\t\t\t\tEnter your choice:";
    cin>>ch;}while(!(ch == 1 || ch == 2 || ch == 3));
    system("cls");
    if(ch==1)
    {
        cout<<"\t\t\t\t\t\tWELCOME TO ASIA TOUR !!\n\n"<<endl;
        cout<<"\t\t\tA visit to Asia is a must if you’re looking to make memories last a lifetime. "<<endl;
        cout<<"\t\tBeautiful beaches, lush greenery, and vibrant culture make this place a paradise destination. "<<endl;
        cout<<"\t\t\tWe help plan personalized Asia tour packages to suit your budget and travel style. "<<endl;
        a.choice();
    }
    else if(ch == 2)
    {
        cout<<"\t\t\t\t\t\tWELCOME TO EUROPE TOUR !!\n\n"<<endl;
        cout<<"From beautiful Paris to smoke-filled coffeeshops in Amsterdam, Oktoberfest to La Tomatina, Europe is a massive, diverse continent. "<<endl;
        cout<<"\tThe continent boasts wonderful beaches, historical architecture, amazing wine, and tons of world-class festivals. "<<endl;
        e.choice();
    }
    else if(ch == 3)
    {
        cout<<"\t\t\t\t\t\tWELCOME TO EUROPE TOUR !!\n\n"<<endl;
        cout<<"\t\t\t\t\tA Journey Of 11 Million Miles: Africa"<<endl;
        cout<<"A continent so diverse, packed full of beautiful countries, backed by a rich heritage and tinged with a complex and painful past. "<<endl;
        cout<<"\t\t\t\t\tThe chance to explore its corners is a gift."<<endl;
        afr.choice();
    }
}

void asia::choice()
{
    asia a;
    int ch,d;
    float budget;
    for(d =0;d<=7;d++)
    {
        cout<<endl;
    }
    cout<<"\t\t\t\t\t\t1. THAILAND TOUR"<<endl;
    cout<<"\t\t\t\t\t\t2. BALI TOUR"<<endl;
    cout<<"\t\t\t\t\t\t3. DUBAI TOUR"<<endl;
    do{
    cout<<endl<<"\t\t\t\t\t\tEnter the tour package:";
    cin>>ch;}while(!(ch == 1 || ch == 2 || ch == 3));
    cout<<endl<<"\t\t\t\t\t\tEnter your budget(>25,000): ";
    cin>>budget;
    if(ch == 1)
    {
        if(budget < 25000)
        {
            cout<<endl<<"\t\t\t\t\tBudget too low, Couldn't find desired tour package !!"<<endl;
        }
        fstream f;
        f.open("ASIA.txt",ios::in|ios::binary);
        while(f.read((char *)&a,sizeof(a)))
        {
            a.calc_cost();
            if((strcmp(a.package_name(),"THAILAND") == 0)&& a.totalcost_asia() <= budget)
            {
                a.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 Thai Baht = Rs. 2.42"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Guay Teow (Noodle Soup)"<<endl;
        cout<<"\t\t\t\t\t\t|2) Som Tum (Green Papaya Salad)"<<endl;
        cout<<"\t\t\t\t\t\t|3) Tom Yum Goong (Spicy Shrimp Soup)"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
    else if(ch == 2)
    {
        fstream f;
        f.open("ASIA.txt",ios::in|ios::binary);
        while(f.read((char *)&a,sizeof(a)))
        {
            a.calc_cost();
            if((strcmp(a.package_name(),"BALI") == 0)&& a.totalcost_asia()<= budget)
            {
                a.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 Indonesian Rupiah = Rs. 0.0056"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Nasi Ayam"<<endl;
        cout<<"\t\t\t\t\t\t|2) Ayam Betutu"<<endl;
        cout<<"\t\t\t\t\t\t|3) Lawar"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
    else if(ch == 3)
    {
        fstream f;
        f.open("ASIA.txt",ios::in|ios::binary);
        while(f.read((char *)&a,sizeof(a)))
        {
            a.calc_cost();
            if((strcmp(a.package_name(),"DUBAI") == 0)&& a.totalcost_asia()<= budget)
            {
                a.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 United Arab Emirates Dirham = Rs. 22.25"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Luqaimat"<<endl;
        cout<<"\t\t\t\t\t\t|2) Knafeh"<<endl;
        cout<<"\t\t\t\t\t\t|3) Margoogat"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
}

void europe::choice()
{
    europe e;
    int ch,d;
    float budget;
    for(d =0;d<=7;d++)
    {
        cout<<endl;
    }
    cout<<"\t\t\t\t\t\t1. PARIS TOUR"<<endl;
    cout<<"\t\t\t\t\t\t2. GERMANY TOUR"<<endl;
    cout<<"\t\t\t\t\t\t3. SWITZERLAND TOUR"<<endl;
    cout<<endl<<"\t\t\t\t\t\tEnter the tour package:";
    cin>>ch;
    cout<<endl<<"\t\t\t\t\t\tEnter your budget: ";
    cin>>budget;
    if(ch == 1)
    {
        fstream f;
        f.open("EUROPE.txt",ios::in|ios::binary);
        while(f.read((char *)&e,sizeof(e)))
        {
            e.calc_cost();
            if((strcmp(e.package_name(),"PARIS") == 0)&& e.totalcost()<= budget)
            {
                e.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 EURO = Rs. 91.62"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Croissant"<<endl;
        cout<<"\t\t\t\t\t\t|2) French Onion Soup"<<endl;
        cout<<"\t\t\t\t\t\t|3) Baguette"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
    else if(ch == 2)
    {
        fstream f;
        f.open("EUROPE.txt",ios::in|ios::binary);
        while(f.read((char *)&e,sizeof(e)))
        {
            e.calc_cost();
            if((strcmp(e.package_name(),"GERMANY") == 0)&& e.totalcost()<= budget)
            {
                e.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 EURO = Rs. 91.62"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Bratwurst"<<endl;
        cout<<"\t\t\t\t\t\t|2) Pretzels (Brezeln)"<<endl;
        cout<<"\t\t\t\t\t\t|3) Currywurst"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
    else if(ch == 3)
    {
        fstream f;
        f.open("EUROPE.txt",ios::in|ios::binary);
        while(f.read((char *)&e,sizeof(e)))
        {
            e.calc_cost();
            if((strcmp(e.package_name(),"SWITZERLAND") == 0)&& e.totalcost()<= budget)
            {
                e.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 Swiss Franc = Rs. 91.08"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Fondue"<<endl;
        cout<<"\t\t\t\t\t\t|2) Swiss Chocolate"<<endl;
        cout<<"\t\t\t\t\t\t|3) Raclette"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
}

void africa::choice()
{
    africa afr;
    int ch,d;
    float budget;
    for(d =0;d<=7;d++)
    {
        cout<<endl;
    }
    cout<<"\t\t\t\t\t\t1. KENYA TOUR"<<endl;
    cout<<"\t\t\t\t\t\t2. MAURITIUS TOUR"<<endl;
    cout<<"\t\t\t\t\t\t3. EGYPT TOUR"<<endl;
    cout<<endl<<"\t\t\t\t\t\tEnter the tour package:";
    cin>>ch;
    cout<<endl<<"\t\t\t\t\t\tEnter your budget: ";
    cin>>budget;
    if(ch == 1)
    {
        fstream f;
        f.open("AFRICA.txt",ios::in|ios::binary);
        while(f.read((char *)&afr,sizeof(afr)))
        {
            afr.calc_cost();
            if((strcmp(afr.package_name(),"KENYA") == 0)&& afr.totalcost()<= budget)
            {
                afr.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 Kenyan Shilling  = Rs. 0.61"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Ugali"<<endl;
        cout<<"\t\t\t\t\t\t|2) Kenyan Pilau"<<endl;
        cout<<"\t\t\t\t\t\t|3) Nyama Choma"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
    else if(ch == 2)
    {
        fstream f;
        f.open("AFRICA.txt",ios::in|ios::binary);
        while(f.read((char *)&afr,sizeof(afr)))
        {
            afr.calc_cost();
            if((strcmp(afr.package_name(),"MAURITIUS") == 0)&& afr.totalcost()<= budget)
            {
                afr.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 Mauritian Rupee = Rs. 1.81"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Dholl Puri"<<endl;
        cout<<"\t\t\t\t\t\t|2) Fish Vindaye"<<endl;
        cout<<"\t\t\t\t\t\t|3) Octopus Curry"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
    else if(ch == 3)
    {
        fstream f;
        f.open("AFRICA.txt",ios::in|ios::binary);
        while(f.read((char *)&afr,sizeof(afr)))
        {
            afr.calc_cost();
            if((strcmp(afr.package_name(),"EGYPT") == 0)&& (afr.totalcost()<= budget))
            {
                afr.showdata();
            }
        }
        cout<<endl<<"\t\t\t\t\t\tEXTRA INFO :"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|CURRENCY VALUE: 1 Egyptian Pound = Rs. 2.70"<<endl;
        cout<<endl<<"\t\t\t\t\t\tMUST TRY FOODS:"<<endl;
        cout<<endl<<"\t\t\t\t\t\t|1) Koshari"<<endl;
        cout<<"\t\t\t\t\t\t|2) Ful Medames"<<endl;
        cout<<"\t\t\t\t\t\t|3) Shawarma"<<endl;
        cout<<endl<<"\t\t\t\t\t\t\tBON VOYAGE"<<endl;
        f.close();
    }
}

