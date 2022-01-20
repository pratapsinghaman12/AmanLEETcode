class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int e=0;
        int s=0;
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
        return e-s;
    }
};