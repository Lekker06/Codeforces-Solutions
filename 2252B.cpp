#include <iostream>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,c=0; cin>>n;string s[n];
    for(int i=0;i<n;i++)
    {
      cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
      if(s[i]==s[i+1]&&s[i]==1)
      {
        s.pop(i+1);c++;
        if(s[i]==s[i+1]&&s[i]==0)
        {
          s.pop(i+1);c++;
        }
      }
    }
    for(int i=0;i<n;i++){
    if(s[i]==s[i+1])
    {
     cout<<-1<<endl;
    }
    else {
      cout<<c<<endl;
    }
  }
}
}
