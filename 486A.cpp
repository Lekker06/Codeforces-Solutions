#include <iostream>
using namespace std;
int main()
{
  long long int n,t;cin>>n;
  if(n%2!=0){
    n++;
    t=-n/2;}
  else
     t=n/2;
   
   cout<<t;
}
