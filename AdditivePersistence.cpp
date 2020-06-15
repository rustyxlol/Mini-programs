#include<iostream>
using namespace std;

int calculate_persistence(int num,int result)
{
    int sum=0;
    while(num!=0)
    {
        sum += (num % 10);
        num/=10;
    }

    if(sum >= 10)
    {
        result++;
        calculate_persistence(sum,result);
    }
    else
        return result;
}


int main()
{
    unsigned long long num,sum=0;
    int result;

    cout<<"Input number: ";
    cin>>num;

    if(num < 10)
        result = 0;
    else
        result = calculate_persistence(num,1);

    cout<<result;
}
