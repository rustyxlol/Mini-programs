#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

string genPassword(int len) {
    string pass="";
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<len;i++)
        pass+=alphanum[rand() % (sizeof(alphanum)-1)];
    return pass;
}

int main() {
    srand(time(NULL));
    string password="";
    int len;
    cout<<"Enter length of the password: ";
    cin>>len;
    cout<<genPassword(len);
}
