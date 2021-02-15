#include<iostream>
using namespace std;

void convert(int h,int m,string ampm)
{
    string clockM[] = {"Ten","Twenty", "Thirty", "Forty", "Fifty"};
    string clockHM[] = {"Twelve","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten", "Eleven", "Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};

    cout<<"It's "<<clockHM[h%12];
    cout<<" ";
    if(m == 0)
        cout<<ampm;
    else if(m%10 == 0)
        cout<<clockM[m/10 - 1];
    else if(m < 20)
        cout<<clockHM[m];
    else
    {
        cout<<clockM[m/10 - 1]<<" "<<clockHM[m%10];
    }
    cout<<" "<<ampm<<endl;
}

void get_time(string str)
{
    string time = str;
    string ampm="AM";

    int h,m;

    do
    {
        cout<<"Input time: ";
        cin>>time;
        cout<<"\n";
        h = stoi(time.substr(0,2));
        m = stoi(time.substr(3,2));
        if(h>=12)
        {
            ampm="PM";
            h-=12;
        }
        if(h == 00) h=12;
    }


    while((time.length() != 5 || h > 23 || m>60 || time[2] != ':'));
    convert(h,m,ampm);
}

int main()
{
    string time;
    char ch;
    while(1)
    {
        get_time(time);
        cout<<"\n\n\n";
        cout<<"Restart? (y/n):";
        cin>>ch;
        cout<<"\n\n\n";
        if(ch == 'n' || ch == 'N')
            break;
    }
    return 0;
}
