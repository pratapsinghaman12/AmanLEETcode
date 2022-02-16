class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,0);
        if(n<3)
        {
            return 0;
        }
        int curr_dif=nums[2]-nums[1];
        int prev_dif=nums[1]-nums[0];
        if(curr_dif==prev_dif)
        {
            dp[2]=1;
            prev_dif=curr_dif;
        }
        
        for(int i=3;i<n;i++)
        {
            curr_dif=nums[i]-nums[i-1];
            if(curr_dif==prev_dif)
            {
                dp[i]=1+dp[i-1];
            }
            prev_dif=curr_dif;
        }
        
        int sum=0;
        for(auto x:dp)
        {
            sum=sum+x;
        }
        return sum;
    }
};