#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
  ll n;
  cin>>n;
 
  vector<ll> a(n);
 
  for(ll i=0;i<n;i++) cin>>a[i];
 
  ll pref1=0,pref12=0;
  // pref1 will store cnt1-cnt2-cnt3;
  // pref12 will store cnt1+cnt2-cnt3;
 
  ll min_pref12=INT_MAX;
 
  for(ll i=0;i<n-1;i++)
  {
    if(a[i]==1)
    {
      pref1++;
    } 
    else
      pref1--;
 
    if(a[i]==1 || a[i]==2)
    {
      pref12++;
    }
    else
      pref12--;
 
    if(pref12>=min_pref12)
    {
      cout<<"YES"<<endl;
      return;
    }
 
    if(pref1>=0)
    {
      min_pref12=min(min_pref12,pref12);
    }
 
  }
  cout<<"NO"<<endl;
}
int main()
{
    int T;
  T = 1;
  cin>>T;
 
  while (T--)
  {
    solve();
  }
}
