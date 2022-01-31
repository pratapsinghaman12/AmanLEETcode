class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        
        arr[0]=1;
       
        for(int i=1;i<n;i++)
        {
            arr[i]=1;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    arr[i]=max(arr[i],1+arr[j]);
                }
            }
        }
         int res=arr[0];
        for(int i=1;i<n;i++)
        {
            res=max(res,arr[i]);
        }
        return res;
    }
};