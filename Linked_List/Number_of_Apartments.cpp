#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=a*a;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=0,b=0,c=0;

        bool f=true;

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                int p=n-(3*i+5*j);
                if(p>=0 && p%7==0)
                {
                a=i,b=j,c=p/7;
                f=false;break;
                }
            }
            if(!f)break;
        }
        if(f)cout<<-1<<"\n";
        else cout<<a<<" "<<b<<" "<<c<<"\n";
    }
}
