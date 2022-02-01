class Solution {
public:
    int amanKadane(vector<int>arr,int n)
    {
        int res=arr[0];
        int curr_sum=arr[0];
        for(int i=1;i<n;i++)
        {
            curr_sum=max(curr_sum+arr[i],arr[i]);
            res=max(res,curr_sum);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int first=amanKadane(nums,n);
        if(first<0)
        {
            return first;
        }
        for(int i=0;i<n;i++)
        {
           sum+=nums[i];
            nums[i]=nums[i]*-1;
        }
        
        int second= sum+amanKadane(nums,n);
        return max(first,second);
    }
};