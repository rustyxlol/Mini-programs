#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

string result = "";

void check_hex(int num)
{
    switch(num)
    {
        case 10:
            result += "A";
            break;
        case 11:
            result += "B";
            break;
        case 12:
            result += "C";
            break;
        case 13:
            result += "D";
            break;
        case 14:
            result += "E";
            break;
        case 15:
            result += "F";
            break;
        default:
            result += to_string(num);
    }
}

void toHex(int r,int g,int b)
{
    int red,green,blue;
    int rem;
    while(b >= 1 || g >= 1 || r >= 1)
    {
        if(b >= 1)
        {
            rem = b % 16;
            b/=16;
            check_hex(rem);
        }
        if(g >= 1)
        {
            rem = g % 16;
            g/=16;
            check_hex(rem);
        }
        if(r >= 1)
        {
            rem = r % 16;
            r/=16;
            check_hex(rem);
        }
    }
    reverse(result.begin(),result.end());
    cout<<"#"<<result;
}
int main()
{
    int r,g,b;
    int rem;

    cout<<"Input red: ";
    cin>>r;

    cout<<"Input green: ";
    cin>>g;

    cout<<"Input blue: ";
    cin>>b;

    toHex(r,g,b);
}
