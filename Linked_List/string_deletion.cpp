#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char>v;

        int i=0;
        int ans=0;
        while(i<n)
        {
            int cnt=0;
            while(i+1<n && s[i]==s[i+1])
            {   i++;
                cnt++;
            }
            if(cnt>1)ans++;
            else v.push_back(s[i]);
            i++;
        }
        int ans1=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])ans1++,i++;
        }
        if(v.size()>0)ans+=ans1;


        cout<<ans<<"\n";
    }
}
