class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        bool aman=false;
        for(int i=0;i<n;i++)
        {
            int x= abs(nums[i]);
            if(x==0||x==n+1)
            {
                aman=true;
            }
            else if(nums[x-1]==0)
            {
                nums[x-1]=(n+1)*-1;
            }
            else
            {
                nums[x-1]=nums[x-1]*-1;
            }  
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                return i+1;
            }
        }
        if(aman==false)
        {
            return 0;
        }
        return -1;
    }
};