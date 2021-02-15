#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<map>
#include <iterator>
using namespace std;

string morse[] =
{
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--. ",
    "....",
    ".. ",
    ".--- ",
    "-.- ",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--.."
};

char text[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void encode()
{
    string input;
    map<char, string> TtoM;
    for(int i=0;i<26;i++)
        TtoM.insert(pair<char,string>(text[i],morse[i]));

    cout<<"ENCODING"<<endl;
    cout<<"Enter Text: ";
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        if(input[i] == ' '){
            cout<<" ";
        }
        else
            cout<<TtoM[toupper(input[i])]<<" ";
    }

}

void decode()
{
    string input;
    map<string, char> MtoT;

    for(int i=0;i<26;i++)
        MtoT.insert(pair<string,char>(morse[i],text[i]));

    cout<<"DECODING"<<endl;
    cout<<"PRESS x ANY TIME TO EXIT"<<endl;
    cout<<"Enter code: ";
    getline(cin,input);
    int i=0;
    while (input[i++])
    {
        if(input == "x" || input == "X")
            break;
        cout<<MtoT[input]<<" ";
    }
}

int main()
{
    int ch;
    cout<<"\tMORSE CODE\n\n"<<endl;

    do
    {
        cout<<endl;
        cout<<"1. TEXT TO MORSE"<<endl;
        cout<<"2. MORSE TO TEXT"<<endl;
        cout<<"3. EXIT"<<endl;
        cout<<"ENTER CHOICE: ";
        cin>>ch;
        cin.ignore();
        cout<<endl;
        if(ch==1)
            encode();
        else if(ch == 2)
            decode();
        else
            return 0;
    }while(ch!=3);
}
