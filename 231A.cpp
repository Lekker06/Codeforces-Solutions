#include <iostream>
using namespace std;
int main()
{
  int n,co=0; cin>>n;
  n=n+1;
  while(--n){
    int a,b,c;
    cin>>a>>b>>c;
    a = (a > 0) ? 1 : 0;
    b = (b > 0) ? 1 : 0;
    c = (c > 0) ? 1 : 0;
    if(a+b+c>=2) 
      co++;
  }
  cout<<co;
 }
