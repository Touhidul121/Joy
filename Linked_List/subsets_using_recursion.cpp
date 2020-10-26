#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int n,a;

void solve(int pos,vector<int>v)
{
  if(pos>=n)
  {
      for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
      cout<<"\n";
      return;
  }
  v.push_back(arr[pos]);
  solve(pos+1,v);
  v.pop_back();
  solve(pos+1,v);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,arr.push_back(a);
    vector<int>v;
    solve(0,v);
}
