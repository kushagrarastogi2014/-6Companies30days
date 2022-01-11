class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int p=1;
        int count=0;
        for(int start=0,end=0;end<n;end++)
        {
            p*=nums[end];
            while(start<end && p>=k)
            {
                p=p/nums[start++];
            }
            if(p<k)
            {
                int len=end-start+1;
                count+=len;
            }
        }
        return count;
    }
};