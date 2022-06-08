class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr_sum=0;
        int res=nums[0];
        for(int i=0;i<n;i++)
        {
            curr_sum=max(nums[i],curr_sum+nums[i]);
            res=max(res,curr_sum);
        }
        return res;
    }
};