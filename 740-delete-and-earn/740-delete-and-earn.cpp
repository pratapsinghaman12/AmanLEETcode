class Solution {
public:
    vector<int>dp;
    int aman_rec(vector<int>&arr,int i)
    {
        
         if(i<0)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        else
        {
          
        int sum1=aman_rec(arr,i-1);
        int sum2= arr[i] + aman_rec(arr,i-2);
        
        dp[i]= max(sum1,sum2);  
        }
       return dp[i];
    }
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            m=max(m,nums[i]);
        }
        
        vector<int>arr(m+1,0);
        dp=vector<int>(m+1,-1);
         for(auto i:nums)
            arr[i]+=i;
        return aman_rec(arr,m);
    }
};