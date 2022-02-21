class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0; int count=1;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[res]==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            
            if(count==0)
            {
                res=i;
                count=1;       
            }
        }
        
        count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[res])
            {
                count++;
            }
        }
        
        if(count<=n/2)
        {
            return -1;
        }
        return nums[res];
    }
};