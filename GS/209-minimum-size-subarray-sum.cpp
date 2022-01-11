class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result=INT_MAX;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                result=min(result,i+1-left);
                sum-=nums[left];
                left++;
            }
        }
        if(result==INT_MAX)
            return 0;
        else
            return result;
    }
};