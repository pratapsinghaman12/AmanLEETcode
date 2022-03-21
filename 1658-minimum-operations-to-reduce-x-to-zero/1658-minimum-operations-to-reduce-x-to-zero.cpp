class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total= accumulate(nums.begin(),nums.end(),0);
        int sum= total-x;
        int pre_sum=0;
        int j=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            while(pre_sum>sum&&j<=i)
            {
                pre_sum-=nums[j++];
            }
            if(pre_sum==sum)
            {
                ans=max(ans,i-j+1);
            }
        }
        if(ans==INT_MIN)
        {
            return -1;
        }
        else
        {
            return nums.size()-ans;
        }
    }
};