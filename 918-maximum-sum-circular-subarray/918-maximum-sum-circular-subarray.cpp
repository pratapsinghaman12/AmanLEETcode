class Solution {
public:
    int aman(vector<int>&nums)
	{
		int n=nums.size();
		int curr_sum=nums[0];
		int ans=nums[0];
		for(int i=1;i<n;i++)
		{
			curr_sum+=nums[i];
			curr_sum=max(curr_sum,nums[i]);
			ans=max(ans,curr_sum);
		}
		return ans;
	}
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
		int total=0;
		int normal=aman(nums);
		if(normal<0)
		{
			return normal;
		}
		for(int i=0;i<n;i++)
		{
			total+=nums[i];
			nums[i]=nums[i]*-1;
		}
		
		
		
		int curr=aman(nums);
		return max(normal,total+curr);
    }
};