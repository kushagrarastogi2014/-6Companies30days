// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> s;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int temp=target-nums[i]-nums[j];
                //x=front
                //y=back
                int x=j+1;
                int y=n-1;
                while(x<y)
                {
                    if(nums[x]+nums[y]==temp)
                    {
                        s.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                    else if(nums[x]+nums[y]>temp)
                    {
                        y--;
                    }
                    else if(nums[x]+nums[y]<temp)
                    {
                        x++;
                    }
                }
            }
        }
        for(auto i:s)
            ans.push_back(i);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
