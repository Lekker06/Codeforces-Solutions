#include <iostream>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,l,c=0,p=0;cin>>n;
    for(int i=2;i*i<=n;i++)
    {
      if (n % i == 0)
     { p++;}
      while(n%i==0)
       {
         c++;
         n/=i;
       }
     } 
    if(n>1)
    {
     p++;
     c++;
    }
    l=(p+c)-1;
    cout<<l<<endl;
  }
}
