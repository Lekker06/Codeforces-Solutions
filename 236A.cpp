#include <iostream>
#include <set>
using namespace std;
int main()
{int n,f,l=0;
  string s;
  cin>>s;
  set<char> st;
  for(char c:s){
    st.insert(c);}
   if(st.size()%2==0)
    cout<<"CHAT WITH HER!";
  else if(st.size()%2!=0)
    cout<<"IGNORE HIM!";
  return 0;
  }

