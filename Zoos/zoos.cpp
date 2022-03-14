#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  string s;
  cin>>s;
  int d=0, c=0;
  c=count(s.begin(), s.end(), 'z');
  d=count(s.begin(), s.end(), 'o');
  
  if(2*c==d)
    cout<<"Yes\n";
  else
    cout<<"No\n";  
}