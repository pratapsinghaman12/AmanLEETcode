class Solution {
public:
     int dp[101];
    int aman_rec(vector<int> &arr,int i)
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
        int sum2= arr[i]+ aman_rec(arr,i-2);
        
        dp[i]= max(sum1,sum2);  
        }
       return dp[i];
    }
    int rob(vector<int>& nums) {
      
        int n=nums.size();
         memset(dp, -1, sizeof(dp));
       return aman_rec(nums,n-1); 
    }
};