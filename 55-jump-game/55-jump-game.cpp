class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        if(n==1)
        {
            return true;
        }
        if(nums[0]==0)
        {
            return false;
        }
        int max_i=0;
        for(int i=0;i<n;i++)
        {
            if(max_i>=n-1)
            {
                return true;
            }
            if(max_i>=i)
            {
                max_i= max(max_i,i+nums[i]);
            }
            
        }
        return false;
    }
};