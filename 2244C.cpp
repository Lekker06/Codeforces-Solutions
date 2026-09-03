#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
      int n,x,y;cin>>n>>x>>y;
      int p[n];
      for(int i=0;i<n;i++)
      {
        cin>>p[i];
      }
      int sp[n];set<int>inc,con;
      copy(p,p+n,sp);
      sort(sp,sp+n);
      for(int i=0;i<n;i++)
      {
        if(p[i]!=sp[i])
        {
            inc.insert(i+1);
        }
      }
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
        {
            if((i-j)==x || (i-j)==y)
            {
                con.insert(i);
            }
        }
      }
     if(includes(con.begin(), con.end(), inc.begin(), inc.end()))
     {
      cout<<"YES"<<endl;
     }
     else
     {
      cout<<"NO"<<endl;
     }
  }
}