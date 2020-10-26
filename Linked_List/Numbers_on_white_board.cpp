#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    priority_queue<int>pq;
    for(int i=1;i<=n;i++)
    {
        if(i==n-2 || i==n)continue;
        pq.push(i);
    }

    if(n==2)cout<<2<<"\n"<<1<<" "<<2<<"\n";
    else{
    vector<pair<int,int>>ans1;
    ans1.push_back({n-2,n});

    pq.push(n-1);
    int res=1;
    while(pq.size()>1)
    {
        int x,y;
        x=pq.top();

      pq.pop();
      y=pq.top();

      pq.pop();
      ans1.push_back({x,y});
      int ans=(x+y)/2;
      if((x+y)&1)ans++;

      pq.push(ans);
      if(pq.size()==1)res=(x+y)/2;
    }
    cout<<res<<"\n";
    for(pair<int,int>x:ans1)
        cout<<x.first<<" "<<x.second<<"\n";
    }
    }
}
