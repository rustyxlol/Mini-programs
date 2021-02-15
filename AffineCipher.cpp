#include<string>
#include<iostream>
using namespace std;

int encodeUpper(char& ch,int a,int b)
{
    int c=ch-'A';
    c*=a;
    c+=b;
    c%=26;
    return c;
}

int encodeLower(char& ch,int a,int b)
{
    int c=ch-'a';
    c*=a;
    c+=b;
    c%=26;
    return c;
}


int decodeUpper(char& ch,int a,int b)
{
    int c=ch-'A';
    c-=b;
    c*=a;
    return (c % 26 + 26) % 26;

}

int decodeLower(char& ch,int a,int b)
{
    int c=ch-'a';
    c-=b;
    c*=a;
    return (c % 26 + 26) % 26;
}


void encode()
{
    string input;
    string output="";
    int out;
    int a,b;

    string letters="abcdefghijklmnopqrstuvwxyz";


    cout<<"Enter string to encode: ";
    cin>>input;

    cout<<"Enter value for a: ";
    cin>>a;

    cout<<"Enter value for b: ";
    cin>>b;

    for(int i=0,j=0;i<input.length();i++)
    {
        if(isupper(input[i])){
            out = encodeUpper(input[i],a,b);
            output += toupper(letters[out]);
        }


        else if(islower(input[i])){
            out = encodeLower(input[i],a,b);
            output += letters[out];
        }
        else
            output += input[i];
    }
    cout<<output;

}


int calculate_inverse(int a)
{
    for(int i=0;i<26;i++)
    {
        if(i*a % 26 == 1)
            return i;
    }
    return a;
}


void decode()
{
    string input;
    string output="";

    int out;
    int a,b;

    string letters="abcdefghijklmnopqrstuvwxyz";

    cout<<"Enter string to decode: ";
    cin>>input;

    cout<<"Enter value for a: ";
    cin>>a;

    a=calculate_inverse(a);

    cout<<"Enter value for b: ";
    cin>>b;

    for(int i=0,j=0;i<input.length();i++)
    {
        if(isupper(input[i])){
            out = decodeUpper(input[i],a,b);
            output += toupper(letters[out]);
        }


        else if(islower(input[i])){
            out = decodeLower(input[i],a,b);
            output += letters[out];
        }
        else
            output += input[i];

    }
    cout<<output;

}

int main()
{
    int ch;
    cout<<"\tAFFINE CIPHER\n\n"<<endl;


    do
    {
        cout<<endl;
        cout<<"1. ENCODE"<<endl;
        cout<<"2. DECODE"<<endl;
        cout<<"3. EXIT"<<endl;
        cout<<"ENTER CHOICE: ";
        cin>>ch;
        cout<<endl;
        if(ch==1)
            encode();
        else if(ch == 2)
            decode();
        else
            return 0;
    }while(ch!=3);
}
