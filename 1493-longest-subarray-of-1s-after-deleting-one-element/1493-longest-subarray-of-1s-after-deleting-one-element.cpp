class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int e=0;
         int s=0;
        int k=1;
        while(e<nums.size())
        {
            if(nums[e]==0)
            {
                k--;
            }
            if(k<0)
            {
                if(nums[s]==0)
                {
                    k++;
                }
                s++;
            }
            e++;
        }
        return e-s-1;
    }
};