class Solution {
public:
    bool dp[100001];
    bool winnerSquareGame(int n) {
        if(n==0)
            return false;
        if(dp[n]!=NULL)
            return dp[n];
        bool winner=false;
        for(int i=1;i*i<=n;i++)
        {
            if(!winnerSquareGame(n-i*i))
            {
                winner=true;
                break;
            }
        }
        return dp[n]=winner;
    }
};