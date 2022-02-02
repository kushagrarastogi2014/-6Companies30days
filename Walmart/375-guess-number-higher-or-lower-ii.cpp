class Solution {
public:
    int dp[201][201];
    int rec(int low,int high)
    {
        if(low>=high)
            return 0;
        if(dp[low][high]!=-1)
            return dp[low][high];
        int ans=INT_MAX;
        for(int i=low;i<=high;i++)
        {
            int case1=i+rec(low,i-1);
            int case2=i+rec(i+1,high);
            ans=min(ans,max(case1,case2));
        }
        return dp[low][high]=ans;
    }
    int getMoneyAmount(int n) {
        //memset(dp,-1,sizeof(dp));
        memset(dp,-1,sizeof(dp));
        return rec(1,n);
    }
};
