#include <iostream>
#include <vector>
using namespace std;

int main()
{int n,k,f=0;
  cin>>n>>k;
  vector<int> a(n);
  if(n>=k){
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
   if(a[i]>0)
   {
    if(a[i]>=a[k-1])
      {
       f++;
      }
   }
  }
   cout<<f;}
 return 0;
}
