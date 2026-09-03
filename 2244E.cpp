#include <iostream>
using namespace std;

void solve()
{
  int n,q,c=0;cin>>n>>q;
  string s; cin>>s;
  for(int i=0;i<q;i++)
  {
    int l,r,k;cin>>l>>r>>k;
    for(int i=l-1;i<r;i++)
    {
      if(s.[i]==s[i+1] && s[i]==0)
      {
       s[i]=1;c++;
      }
      else if(s[i]==s[i+1] && s[i]==1)
      {
        s[i]=0;c++;
      }
    }

  }

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
