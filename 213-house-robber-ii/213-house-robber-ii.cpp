class Solution {
public:
     int dp[101];
     int dp1[101];
    
     int aman_rec(vector<int> &arr,int i)
    {
       
         if(i<=0)
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
    
     int aman_rec1(vector<int> &arr,int i)
    {
       
         if(i<0)
        {
            return 0;
        }
        if(dp1[i]!=-1)
        {
            return dp1[i];
        }
        else
        {
          
        int sum1=aman_rec1(arr,i-1);
        int sum2= arr[i]+ aman_rec1(arr,i-2);
        
        dp1[i]= max(sum1,sum2);  
        }
       return dp1[i];
    }
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
         memset(dp, -1, sizeof(dp));
        memset(dp1, -1, sizeof(dp1));
        if(n==1)
        {
            return nums[0];
        }
       return max(aman_rec(nums,n-1),aman_rec1(nums,n-2)); 
    }
};