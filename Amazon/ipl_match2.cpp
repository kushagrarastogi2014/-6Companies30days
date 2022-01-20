// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int> v;
        deque<int> dq;
        
        for(int i=0;i<n;i++)
        {
            while(!dq.empty() && dq.front()<=i-k)
                  dq.pop_front();
                  
                  while(!dq.empty() && arr[dq.back()]<=arr[i] )
                     dq.pop_back();
                     
                     dq.push_back(i);
            
            
            if(i>=k-1)
            v.push_back(arr[dq.front()]);
            
        }
        