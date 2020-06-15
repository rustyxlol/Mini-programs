#include <algorithm>    // std::reverse
#include<string>
#include<iostream>
using namespace std;
int main()
{
 std::string str="the quick brown fox ";
  std::string temp="";
  std::string result="";
  int k=0;
  cout<<str<<endl;
  for(int i=0;i<=str.length();i++)
  {
    if(str[i] == ' '||str[i]=='\0')
    {
  	  temp=str.substr(k,i);
      std::reverse(temp.begin(),temp.end());
      result+=temp;
      k=i;
    cout<<result<<endl;
    }
  }
  std::cout<<result;
}
