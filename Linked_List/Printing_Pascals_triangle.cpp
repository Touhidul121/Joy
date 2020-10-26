class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++)
        {
            vector<int>v;
            for(int j=1;j<=i;)
            {
                if(j==1 || j==i){
                    v.push_back(1);
                    j++;
                }
                else
                {
                    if(i>2){
                    vector<int>v1=ans[ans.size()-1];
                        int cnt=0;
                    for(int k=0;k<v1.size()-1;k++)
                    {
                        cnt++;
                        v.push_back(v1[k]+v1[k+1]);
                    }
                        j+=cnt;
                    }
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
