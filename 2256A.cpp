#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int a,b,c,s=0;cin>>a>>b>>c;
    vector<int> v={a,b,c};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
      s=s+v[i];
    }
    if(v[v.size()-1]>s)
      cout<<(s-v[0])<<endl;   
    else
      cout<<(v[v.size()-1]-v[0])<<endl;
  }
}
