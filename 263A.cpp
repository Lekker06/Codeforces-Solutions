#include <iostream>
using namespace std;
int main()
{
  int r,c,x,m;
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=5;j++)
    {
      cin>>x;
      if(x==1)
      {
        r=i;c=j;
      }
    }
  }
  m=abs(3-r)+abs(3-c);
  cout<<m;
}
