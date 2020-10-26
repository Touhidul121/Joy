#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++)
            cin>>a , v.push_back(a);

        sort(v.begin(),v.end());

        ll ans=v[n-1];
        int cnt=0;
        for(int ind=n-2;ind>=0 && cnt<k ;ind--)
        {
            ans+=v[ind];
            cnt++;
        }
        cout<<ans<<"\n";
    }
}
