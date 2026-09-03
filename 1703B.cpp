#include <iostream>
#include <map>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,sum=0;cin>>n;
    string s;cin>>s;
    map<char,int>freq;
    for(char c:s)
    {
      freq[c]++;
    }
    for(auto x:freq)
    {
      sum=sum+(2+(x.second-1));
    }
    cout<<sum<<endl;
  }
}
