// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int N, int prices[]) {
        vector<int>buy(k,INT_MAX);
        vector<int>profit(k,0);
        if(k<=0||N<=0)
            return 0;
        if(k>N/2)
        {
        int buy,sell;
        int n=N-1;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            while(i<n && prices[i]>=prices[i+1])
            {
                i++;
            }
            buy=prices[i];
            while(i<n && prices[i]<prices[i+1])
            {
                i++;
            }
            sell=prices[i];
            profit+=sell-buy;
        }
        return profit;
        }
        for(int i=0;i<N;i++)
        {
            // buy1=min(prices[i],buy1);
            // profit1=max(profit1,prices[i]-buy1);
            // buy2=min(buy2,prices[i]-profit1);
            // profit2=max(profit2,prices[i]-buy2);
            for(int j=0;j<k;j++)
            {
                buy[j]=min(buy[j],prices[i]-(j>0?profit[j-1]:0));
                profit[j]=max(profit[j],prices[i]-buy[j]);
            }
        }
        return profit[k-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends