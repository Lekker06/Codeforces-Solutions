#include <iostream>
using namespace std;
int main()
{
  int x,y=0;cin>>x;
  if(x<=5)
    y=1;

  else{
    y=(x/5)+(x%5!=0?1:0);
  }
  cout<<y;
}
