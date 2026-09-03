#include <iostream>
using namespace std;
int main()
{
    int k,n,w,total;
    cin>>k>>n>>w;
    total=k*((w*(w+1))/2);
    cout << max(0, total - n);
    return 0;

}
