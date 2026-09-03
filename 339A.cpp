#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{ vector<int>k;
  string S;cin>>S;
  for(int i=0;i<S.size();i+=2){
    k.push_back(S[i]-'0');
  }
  sort(k.begin(),k.end());
  for (int i = 0; i < k.size(); i++) {
    cout << k[i];
    if (i != k.size() - 1)
        cout << "+";
}
 return 0;
}
