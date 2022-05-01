class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int curr_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            curr_sum=max(curr_sum,nums[i]);
            res=max(curr_sum,res);
        }
        return res;
    }
};