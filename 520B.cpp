#include <iostream>
using namespace std;
int main()
{
  int n,m,f=0;
  cin>>n>>m;
  while(m!=n){
  if (m < n) {
    f += (n - m);
    break;
  }
  if(m%2!=0 || m<n)
  {
    m++;
    f++;
  }
  else
  {m/=2;
   f++;
  }
  }cout<<f;           
  return 0;
}
